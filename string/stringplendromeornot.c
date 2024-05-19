#include<stdio.h>
int main(){
    char str[100];
    int length = 0;
    int isPalindrome = 1;
    gets(str);

    while(str[length] != '\0'){
        length++;
    }
    for(int i= 0 ;i <length /2 ; i++){
        if(str[i] != str[length - 1 - i ]){
            isPalindrome = 0;
        }
    }
    if(isPalindrome){
         printf("palindrome\n");
    }else{
        printf("Not palindrome\n");
    }
    return 0;
}
