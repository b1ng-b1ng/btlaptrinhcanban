#include <stdio.h>
#include <stdlib.h>
	int main(){
		int a[3][3] ={{1,2,2},{2,2,2},{3,3,3}};
		int b[3][3] ={{2,3,7},{4,2,2},{1,9,7}};
		int c[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		printf("tong hai mang a va b :\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
