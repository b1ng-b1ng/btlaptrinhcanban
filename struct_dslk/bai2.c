#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char ten[100];
	int stt,tuoi;
	double dtb;
}SV;
	SV nhap(){
		SV x;
		getchar();
		printf("nhap ho va ten "); gets(x.ten);
		do{
			printf("nhap tuoi:(>0) "); 
			scanf("%d",&x.tuoi);
		}
		while(x.tuoi < 0);
		do{
			printf("nhap diem trung binh:(>0) ");
			scanf("%lf",&x.dtb);
		}
		while(x.dtb < 0);
		return x;
	}
	void in(SV a[],int n){
		printf("%33s","DANH SACH SINH VIEN\n");
		printf("%-4s %-30s %-10s %-10s\n","STT","Ho ten","Tuoi","Diem TB");
		for(int i=0;i<n;i++){
			printf("%-4d %-30s %-10d %-10.2lf\n",i+1,a[i].ten,a[i].tuoi,a[i].dtb);
		}
	}
	void xoa(SV a[],int *n, char name[]){
		for(int i=0;i<*n;i++){
			if(strcmp(a[i].ten,name)==0){
				for(int j=i;j<*n;j++){
					a[j] =a[j+1];
				}
			}
		}
		(--*n);
	}
	SV them(){
		SV x;
		getchar();
		printf("nhap ten sinh vien "); gets(x.ten);
		do{
			printf("nhap tuoi:(>0) "); 
			scanf("%d",&x.tuoi);
		}
		while(x.tuoi < 0);
		do{
			printf("nhap diem trung binh:(>0) ");
			scanf("%lf",&x.dtb);
		}
		while(x.dtb < 0);
		return x;
	}
	int main(){
		int n;
		SV a[100];
		int lc = 0;
		while(1){
			printf("%33s","DANH SACH SINH VIEN\n");
			printf("1.Nhap danh sach sinh vien\n");
			printf("2.In ra danh sach sinh vien\n");
			printf("3.Xoa mot sinh vien theo ten\n");
			printf("4.Them mot sinh vien \n");
			printf("0. Thoat chuong trinh\n");
			scanf("%d",&lc);
		if(lc ==1){
		printf("nhap so luong sinh vien: ");
		scanf("%d",&n);
			for(int i=0;i<n;i++){
			a[i] = nhap();
				}
			}
			else if(lc ==2){
				in(a,n);
			}
			else if(lc ==3){
			char name[1000];
				getchar();
				printf("nhap ten sinh vien can xoa: ");
				gets(name);
				xoa(a,&n,name);
			}
			else if( lc == 4){
				a[n] = them();
				n++;
			}
			else if( lc ==0){
				break;
			}
		}
	}
	

