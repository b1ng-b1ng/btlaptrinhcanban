#include <stdio.h>
#include <stdlib.h>

	void swap(int *a,int *b){
		int tmp;
	 tmp = *a;
	 *a = *b;
	 *b = tmp;	
	}
	int main(){
		int a,b;
		printf("nhap lan luot a va b :");
		scanf("%d%d",&a,&b);
		swap(&a,&b);
		printf("hoan doi a va b : %d %d",a,b);
	}
