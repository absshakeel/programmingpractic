#include<stdio.h>
int main(){
    int n,x,y;
    int determinant,cofactor;
    printf("Enter the size of a scalar matrix : ");
    scanf("%d",&n);

    int arr[n][n];


    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            scanf("%d",&arr[row][col]);
        }
    }

    printf("Enter the elements index of the matrix to calculate minor: ");
    scanf("%d %d",&x,&y);
    x= x-1;
    y= y-1;
    int submatrix[n-1][n-1];
    int subrow=0;

    for(int i=0;i<n;i++){
         if(i == x){
            continue;
         }else{
             int subcol=0;
             for(int j=0;j<n;j++){
                if(j == y){
                    continue;
                }else{
                    submatrix[subrow][subcol] = arr[i][j];
                    subcol++;
                }

             }
             subrow++;
             printf("\n");
         }


    }

    determinant = (submatrix[0][0] * submatrix[1][1]) - (submatrix[0][1] * submatrix[1][0]);
    if((x+y) % 2 == 0){
        cofactor = determinant;
    }else{
        cofactor = -1 * determinant;
    }

    printf("The   element of %d, minor = %d and the Cofactor = %d",arr[x][y],determinant,cofactor);

    return 0;
}
