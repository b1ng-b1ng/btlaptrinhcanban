#include <stdio.h>
#include <stdlib.h>
	void nhap(int a[][100],int n,int m){
		printf("nhap mang: \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
	}
	void in(int a[][100],int n,int m){
		printf("mang la :\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
int main(){
	int n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	int a[100][100],b[100][100],c[100][100];
	nhap(a,n,m);
	in(a,n,m);
	nhap(b,m,p);
	in(b,m,p);
	printf("tich hai ma tran la :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			c[i][j] =0;
			for(int k=0;k<m;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	in(c,n,p);
	return 0;
}
