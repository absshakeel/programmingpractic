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

// Function to read the file and search for occurrences of a word
void searchWordInFile(const char *filename, const char *search_word) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0;
    int total_occurrences = 0;

    // Open the file
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and try again.\n");
        return;
    }

    // Convert the search word to lowercase for case-insensitive comparison
    char lowercase_search_word[MAX_WORD_LENGTH];
    strcpy(lowercase_search_word, search_word);
    for (int i = 0; lowercase_search_word[i]; i++) {
        lowercase_search_word[i] = tolower(lowercase_search_word[i]);
    }

    // Search for occurrences of the search word in the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        total_lines++;
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            // Convert the token to lowercase for case-insensitive comparison
            char lowercase_token[MAX_WORD_LENGTH];
            strcpy(lowercase_token, token);
            for (int i = 0; lowercase_token[i]; i++) {
                lowercase_token[i] = tolower(lowercase_token[i]);
            }

            // Check if the token is similar to the search word
            if (strcmp(lowercase_token, lowercase_search_word) == 0) {
                total_occurrences++;

                // Print the line with the search word highlighted
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

    // Close the file
    fclose(file);

    // Display total occurrences of the search word
    printf("Total Occurrences of '%s': %d\n", search_word, total_occurrences);
}

// Function to find and count similar words in the file
void findSimilarWords(const char *filename, const char *search_word) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    SimilarWord similar_words[MAX_SIMILAR_WORDS];
    int similar_words_count = 0;

    // Open the file
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and try again.\n");
        return;
    }

    // Convert the search word to lowercase for case-insensitive comparison
    char lowercase_search_word[MAX_WORD_LENGTH];
    strcpy(lowercase_search_word, search_word);
    for (int i = 0; lowercase_search_word[i]; i++) {
        lowercase_search_word[i] = tolower(lowercase_search_word[i]);
    }

    // Search for similar words in the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            // Convert the token to lowercase for case-insensitive comparison
            char lowercase_token[MAX_WORD_LENGTH];
            strcpy(lowercase_token, token);
            for (int i = 0; lowercase_token[i]; i++) {
                lowercase_token[i] = tolower(lowercase_token[i]);
            }

            // Check if the token is not the search word and is similar
            if (strcmp(lowercase_token, lowercase_search_word) != 0 && strstr(lowercase_token, lowercase_search_word) != NULL) {
                // Check if the similar word already exists in the array
                int found = 0;
                for (int i = 0; i < similar_words_count; i++) {
                    if (strcmp(similar_words[i].word, token) == 0) {
                        similar_words[i].count++;
                        found = 1;
                        break;
                    }
                }

                // If the similar word doesn't exist, add it to the array
                if (!found && similar_words_count < MAX_SIMILAR_WORDS) {
                    strcpy(similar_words[similar_words_count].word, token);
                    similar_words[similar_words_count].count = 1;
                    similar_words_count++;
                }
            }

            token = strtok(NULL, " \t\n");
        }
    }

    // Close the file
    fclose(file);

    // Display similar words and their counts
    printf("Similar Words:\n");
    for (int i = 0; i < similar_words_count; i++) {
        printf("%s: %d\n", similar_words[i].word, similar_words[i].count);
    }
}
// Function to count total lines, total words, and total occurrences of each word in the file
void countFileStats(const char *filename) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0;
    int total_words = 0;
    SimilarWord all_words[MAX_SIMILAR_WORDS];
    int all_words_count = 0;

    // Open the file
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and try again.\n");
        return;
    }

    // Search for total lines, total words, and total occurrences of each word in the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        total_lines++;

        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            total_words++;

            // Check if the word already exists in the array
            int found = 0;
            for (int i = 0; i < all_words_count; i++) {
                if (strcmp(all_words[i].word, token) == 0) {
                    all_words[i].count++;
                    found = 1;
                    break;
                }
            }

            // If the word doesn't exist, add it to the array
            if (!found && all_words_count < MAX_SIMILAR_WORDS) {
                strcpy(all_words[all_words_count].word, token);
                all_words[all_words_count].count = 1;
                all_words_count++;
            }

            token = strtok(NULL, " \t\n");
        }
    }

    // Close the file
    fclose(file);

    // Filter words appearing only once
    SimilarWord filtered_words[MAX_SIMILAR_WORDS];
    int filtered_count = 0;
    for (int i = 0; i < all_words_count; i++) {
        if (all_words[i].count > 1) {
            filtered_words[filtered_count] = all_words[i];
            filtered_count++;
        }
    }

    // Display total lines, total words, and total occurrences of each word in the file
    printf("Total Lines: %d\n", total_lines);
    printf("Total Words: %d\n", total_words);
    printf("Duplicate words:\n");
    for (int i = 0; i < filtered_count; i++) {
        printf("%s: %d\n", filtered_words[i].word, filtered_words[i].count);
    }
}


int main() {
    char filename[MAX_FILENAME_LENGTH];
    char search_word[MAX_WORD_LENGTH];

    // Ask user for the filename of the text
    printf("Enter the filename of the text: ");
    scanf("%s", filename);


    // Count total lines, total words, and total occurrences of each word in the file
    countFileStats(filename);

    // Ask user for the word to search
    printf("Enter the word to search: ");
    scanf("%s", search_word);

    // Search for occurrences of the search word in the file
    searchWordInFile(filename, search_word);
    // Find and count similar words in the file
    findSimilarWords(filename, search_word);
    return 0;
}
