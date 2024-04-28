#include<stdio.h>
int main(){
    struct book{
        char name;
        float price;
        int pages;
    };
    struct book b1;
    printf("Enter book name Price & Total Pages:");
    scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
    printf("Book Name is : %c \n",b1.name);
    printf("Book Price is : %.2f \n",b1.price);
    printf("Book pages is : %d \n",b1.pages);

    return 0;
}
