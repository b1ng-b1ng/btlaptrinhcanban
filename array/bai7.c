#include<stdio.h>
#include<stdlib.h>
    int cmp(const void *a,const void *b){
     int *x =(int*)a;
     int *y = (int*)b;
     return *x -*y;
    }
    int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("nhap mang a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("mang sau khi sap xep la: ");
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
    }
