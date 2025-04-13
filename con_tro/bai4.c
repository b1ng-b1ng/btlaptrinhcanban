#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("nhap so phan tu cua mang ");
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(n*4);
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d cua mang ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int *minptr = &a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]< *minptr){
				minptr = &a[j];
			}
		}
		int tmp = a[i];
		a[i] = *minptr;
		*minptr = tmp;
	}
	printf("mang sau khi sap xep la ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
