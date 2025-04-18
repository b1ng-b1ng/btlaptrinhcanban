#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[3][3];
	int lc =0;
	printf("chon truong hop:\n");
	printf("1.khai bao mang co san\n");
	printf("2.nhao gia tri tu ban phim\n");
	printf("nhap lua chon(1 hoac 2): ");
	scanf("%d",&lc);
	switch(lc){
	
		case 1: {
		int a[3][3] = {{1,2,3},{3,4,5},{6,7,9}};
		printf("mang da khai bao san:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
			break;
		}
		case 2:
		{
			printf("nhap cac phan tu cua mang ");
				for(int i=0;i<3;i++){
					for(int j=0;j<3;j++){
						scanf("%d",&a[i][j]);
					}
				}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			break;
		}
	}
	return 0;
}
