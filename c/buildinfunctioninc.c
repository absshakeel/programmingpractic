// string.h > strlen(),strcpy(),strcmp(),strcat(),
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "hello this is c";
    int len = strlen(str);
     /* printf("The length of the string is : %d ",len); */
    char str2[50];
    /* strcpy(str2,str);
    printf("%s",str2);

    */
    /*
    char fname[] = "abs ";
    char lname[] = "shakeel";
    strcat(fname,lname);
    puts(fname);
    */

    char st1[] = "ABX";
    char st2[] = "ABX";
    int store = strcmp(st1,st2);
    printf("%d \n",store);

    char letter = 'X';
    printf("%d",letter);



    return 0;
}
