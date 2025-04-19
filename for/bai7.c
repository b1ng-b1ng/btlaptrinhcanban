#include<stdio.h>
#include<stdlib.h>
    int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    float  tong =0;
    for(int i=1;i<=n;i++){
        tong +=1.0/i;
    }
    printf("tong cua chuoi 1+1/2+1/3+...+1/n =%.2f",tong);
    return 1;
    }


