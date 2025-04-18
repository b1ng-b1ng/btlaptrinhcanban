#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct{
	char name [50];
	int num,price,tt,stt;
} hh;
	hh nhap(){
		hh x;
		getchar();
		printf("nhap ten hang: "); 	gets(x.name);
	   do {
        printf("Nhap don gia (>= 0): ");
        scanf("%d", &x.price);
   		 } while (x.price < 0);

	   do {
        printf("Nhap so luong (>= 0): ");
        scanf("%d", &x.num);
    } while (x.num < 0);

		x.tt = x.price * x.num;
		return x;
	}
	void in(hh a[],int n){
		int sum =0;
	  printf("%-4s %-12s %-8s %-9s %-10s\n","STT", "TEN HANG", "DON GIA","SO LUONG", "THANH TIEN" );
		for(int i=0;i<n;i++){
			printf("%-4d %-12s %-8d %-9d %-10d\n",i+1,a[i].name,a[i].price,a[i].num,a[i].tt);
			sum+= a[i].tt;
		}
		printf("%37s","TONG TIEN:");
		printf("%-10d",sum);
	}
	int cmp(const void *a,const void *b){
		hh*x =(hh*)a;
		hh*y = (hh*)b;
		if(strcmp(x->name,y->name)!=0){
			return strcmp(x->name,y->name);
		}
		else return x->stt - y->stt;
	}
	int main(){
	int n;
	do {
        printf("Nhap so luong mat hang : ");
        scanf("%d", &n);
    	} while (n <= 0);
		hh a[n];
		for(int i=0;i<n;i++){
			a[i] = nhap();
		}
		qsort(a,n,sizeof(hh),cmp);
		in(a,n);
	}
