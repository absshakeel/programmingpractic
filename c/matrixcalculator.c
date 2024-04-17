#include<stdio.h>
int main(){
 int m,n;
 printf("Size of array example[3][3](input:3 3):",m,n);
 scanf("%d %d",&m,&n);
 int arr[m][n];
 int newarr[2][2];
 printf("Input Elements:");

 for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++){
        scanf("%d",&arr[i][j]);
     }
 }
  for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++){
         printf("%d",arr[i][j]);
    }
    printf("\n");
    }


    for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++){
         if(i==0 || j == 0){
            continue;
         }else{
            printf("%d",arr[i][j]);
         }

    }
    printf("\n");
    }
 return 0;



}
