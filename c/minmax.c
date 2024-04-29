#include<stdio.h>
void minmax(int arr[],int len,int *min, int *max){

    for(int i=0;i<len;i++){
        if(min > arr[i]){
            *min = arr[i];
        }
        if(max < arr[i]){
            *max = arr[i];
        }
    }
}
int main(){

    int list[] = {10,20,1,5,8,4};
    int min=list[0];
    int max=list[0];
    int* ptrmin,ptrmax;
    ptrmin = &min;
    ptrmax = &max;
    int length = sizeof(list) / sizeof(list[0]);
    minmax(list,length,ptrmin,ptrmax);

    printf("lowest value is : %d \n",min);
    printf("Height value is : %d",max);
    return 0;
}
