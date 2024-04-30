
#include<stdio.h>
int main(){

    char str[50] = "Hel fdsfds sf";
     printf("%d \n",strlen(str));
    int i=0;
    int length = 0;
    while( str[i] != '\0'){
        length++;
        printf("%c ",str[i++]);
    }


    /*char fullname[50]; */
    /* scanf("%s",fullname); (avoid this)*/

    //read string
    /*fgets(fullname,sizeof(fullname),stdin);*/

    /* printf("My name is: %s ",fullname); */
     /* puts(fullname); */


/*
    char name[20];
    char *nmptr;
    nmptr = name;
    fgets(nmptr,sizeof(name),stdin);
    printf("My name is: %d ",*nmptr);

*/








    return 0;
}
