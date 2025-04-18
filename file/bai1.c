#include<stdio.h>
#include<stdlib.h>
	void nhap(int a[][100],int n ,int m,char c){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("nhap %c[%d][%d]=",c,i,j);
				scanf("%d",&a[i][j]);
			}
		}
	}
	void ghifile(FILE *f,int a[][100],int n,int m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				fprintf(f,"%d ",a[i][j]);
			}
			fprintf(f,"\n");
		}
	}
	int main(){
		int n,m;
		printf("nhap so cot va hang cua ma tran: ");
		scanf("%d%d",&n,&m);
		int a[100][100],b[100][100],c[100][100];
		FILE*f;
		f = fopen("CONG_MT.C","w");
		if(f == NULL){
			printf("khong the mo file");
		}
		else{
			nhap(a,n,m,'A');
			fprintf(f,"mang A:\n");
			ghifile(f,a,n,m);
			nhap(b,n,m,'B');
			fprintf(f,"mang B:\n");
			ghifile(f,b,n,m);
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					c[i][j] = a[i][j] + b[i][j];
				}
			}
			fprintf(f,"mang C=(A+B):\n");
			ghifile(f,c,n,m);
		}
		printf("da ghi cac mang vao file");
		fclose(f);
		return 10;
	}
