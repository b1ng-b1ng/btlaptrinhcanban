#include <stdio.h>
#include <stdlib.h>

	int main(){
		int a[100];
		for(int i=0;i<10;i++){
			printf("nhap phan thu %d cua mang:",i+1);
			scanf("%d",&a[i]);
		}
		printf("mang ban vua nhap la :");
		for(int i=0;i<10;i++){
			printf("%d ",*(a+i));
		}
	}
