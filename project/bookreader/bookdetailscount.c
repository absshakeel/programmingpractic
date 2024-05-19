#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_FILENAME_LENGTH 100
#define MAX_LINE_LENGTH 1000
#define MAX_WORD_LENGTH 100
#define MAX_SIMILAR_WORDS 100

typedef struct {
    char word[MAX_WORD_LENGTH];
    int count;
} SimilarWord;

void countFileStats(const char *filename) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0;
    int total_words = 0;
    int total_characters = 0;
    int total_paragraphs = 0;
    int total_sentences = 0;
    int total_numeric_values = 0;
    int total_spaces = 0;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file '%s'. Make sure the file exists.\n", filename);
        return;
    }

    SimilarWord all_words[MAX_SIMILAR_WORDS];
    int all_words_count = 0;

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        total_lines++;

        if (strcmp(line, "\n") == 0) {
            total_paragraphs++;
        }
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != '\n') {
                total_characters++;
                if (isspace(line[i])) {
                    total_spaces++;
                }
            }
        }
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            total_words++;
            int is_numeric = 1;
            for (int i = 0; token[i]; i++) {
                if (!isdigit(token[i])) {
                    is_numeric = 0;
                    break;
                }
            }
            if (is_numeric) {
                total_numeric_values++;
            }
            for (int i = 0; token[i]; i++) {
                if (token[i] == '.' || token[i] == '?' || token[i] == '!') {
                    total_sentences++;
                }
            }
            char lowercase_token[MAX_WORD_LENGTH];
            strcpy(lowercase_token, token);
            for (int i = 0; lowercase_token[i]; i++) {
                lowercase_token[i] = tolower(lowercase_token[i]);
            }
            int found = -1;
            for (int i = 0; i < all_words_count; i++) {
                if (strcmp(all_words[i].word, lowercase_token) == 0) {
                    found = i;
                    break;
                }
            }
            if (found == -1 && all_words_count < MAX_SIMILAR_WORDS) {
                strcpy(all_words[all_words_count].word, lowercase_token);
                all_words[all_words_count].count = 1;
                all_words_count++;
            } else if (found != -1) {
                all_words[found].count++;
            }

            token = strtok(NULL, " \t\n");
        }
    }

    fclose(file);
    SimilarWord filtered_words[MAX_SIMILAR_WORDS];
    int filtered_count = 0;
    for (int i = 0; i < all_words_count; i++) {
        if (all_words[i].count > 1) {
            filtered_words[filtered_count] = all_words[i];
            filtered_count++;
        }
    }

    printf("Total Lines: %d\n", total_lines);
    printf("Total Words: %d\n", total_words);
    printf("Total Characters: %d\n", total_characters);
    printf("Total Spaces: %d\n", total_spaces);
    printf("Total Paragraphs: %d\n", total_paragraphs);
    printf("Total Sentences: %d\n", total_sentences);
    printf("Total Numeric Values: %d\n", total_numeric_values);
    printf("Occurrences of Each Word (appearing more than once):\n");
    for (int i = 0; i < filtered_count; i++) {
        printf("%s: %d\n", filtered_words[i].word, filtered_words[i].count);
    }
}

void searchWordInFile(const char *filename, const char *search_word) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0;
    int total_occurrences = 0;

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and try again.\n");
        return;
    }
    char lowercase_search_word[MAX_WORD_LENGTH];
    strcpy(lowercase_search_word, search_word);
    for (int i = 0; lowercase_search_word[i]; i++) {
        lowercase_search_word[i] = tolower(lowercase_search_word[i]);
    }
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        total_lines++;
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            char lowercase_token[MAX_WORD_LENGTH];
            strcpy(lowercase_token, token);
            for (int i = 0; lowercase_token[i]; i++) {
                lowercase_token[i] = tolower(lowercase_token[i]);
            }

            if (strcmp(lowercase_token, lowercase_search_word) == 0) {
                total_occurrences++;
                printf("Line %d: ", total_lines);
                char *pos = strstr(line, token);
                char *ptr = line;
                while (*ptr != '\0') {
                    if (ptr == pos) {
                        printf("\"%s\"", token);
                        ptr += strlen(token);
                    } else {
                        putchar(*ptr);
                        ptr++;
                    }
                }
                putchar('\n');
            }

            token = strtok(NULL, " \t\n");
        }
    }

    fclose(file);

    printf("Total Occurrences of '%s': %d\n", search_word, total_occurrences);
}
void findSimilarWords(const char *filename, const char *search_word) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    SimilarWord similar_words[MAX_SIMILAR_WORDS];
    int similar_words_count = 0;

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and try again.\n");
        return;
    }
    char lowercase_search_word[MAX_WORD_LENGTH];
    strcpy(lowercase_search_word, search_word);
    for (int i = 0; lowercase_search_word[i]; i++) {
        lowercase_search_word[i] = tolower(lowercase_search_word[i]);
    }

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            char lowercase_token[MAX_WORD_LENGTH];
            strcpy(lowercase_token, token);
            for (int i = 0; lowercase_token[i]; i++) {
                lowercase_token[i] = tolower(lowercase_token[i]);
            }
            if (strcmp(lowercase_token, lowercase_search_word) != 0 && strstr(lowercase_token, lowercase_search_word) != NULL) {
                int found = -1;
                for (int i = 0; i < similar_words_count; i++) {
                    if (strcmp(similar_words[i].word, token) == 0) {
                        found = i;
                        break;
                    }
                }
                if (found == -1 && similar_words_count < MAX_SIMILAR_WORDS) {
                    strcpy(similar_words[similar_words_count].word, token);
                    similar_words[similar_words_count].count = 1;
                    similar_words_count++;
                } else if (found != -1) {
                    similar_words[found].count++;
                }
            }

            token = strtok(NULL, " \t\n");
        }
    }
    fclose(file);
    printf("Similar Words:\n");
    for (int i = 0; i < similar_words_count; i++) {
        printf("%s: %d\n", similar_words[i].word, similar_words[i].count);
    }
}
int main() {
    char filename[MAX_FILENAME_LENGTH];
    char search_word[MAX_WORD_LENGTH];
    printf("Enter the filename of the text: ");
    fgets(filename, MAX_FILENAME_LENGTH, stdin);
    filename[strcspn(filename, "\n")] = '\0';
    countFileStats(filename);
    printf("Enter the word to search: ");
    scanf("%s", search_word);
    searchWordInFile(filename, search_word);
    findSimilarWords(filename, search_word);
    return 0;
}

