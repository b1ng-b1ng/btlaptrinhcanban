#include<stdio.h>
#include<stdlib.h>
    int main(){
        int n;
        printf("nhap n=");
        scanf("%d",&n);
        long long gt = 1;
    for(int i=1;i<=n;i++){
        gt *=i;
    }
    printf("ket qua n!=%d",gt);
    }
