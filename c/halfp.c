#include<stdio.h>
int main(){
	int n=5;
	for(int i=0;i<=n;i++){
		for(int k=i;k>0;k--){
			printf("%d ",k);
		}
		printf("\n");
	}
}
