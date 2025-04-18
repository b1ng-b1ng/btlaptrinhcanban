#include <stdio.h>
#include <stdlib.h>
	void nhap(int a[][100],int n,int m,char c){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%c[%d][%d]=",c,i,j);
				scanf("%d",&a[i][j]);
			}
		}
	}
	void ghi(FILE *f,int a[][100],int n,int m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				fprintf(f,"%d ",a[i][j]);
			}
			fprintf(f,"\n");
		}
	}
	int main(){
		FILE *f;
		f = fopen("TICH_MT.C","w");
		if(f == NULL){
			printf("khong tim thay file");
		}
		else{
			int n,m,p;
			int a[100][100],b[100][100],c[100][100];
			printf("nhap n,m,p ");
			scanf("%d%d%d",&n,&m,&p);
			fprintf(f, "gia tri n,m,p :%d %d %d\n", n, m, p);
			fprintf(f,"mang A:\n");
			nhap(a,n,m,'A');
			ghi(f,a,n,m);
			printf("da ghi mang A!\n");
			fprintf(f,"mang B:\n");
			nhap(b,m,p,'B');
			ghi(f,b,n,m);
			printf("da ghi mang B!\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<p;j++){
					c[i][j] =0;
					for(int k=0;k<m;k++){
						c[i][j] += a[i][k] * b[k][j];
					}
				}
			}
			fprintf(f,"mang B:\n");
			ghi(f,c,n,p);
			printf("da ghi mang c vao file");
		}
		fclose(f);
	}
