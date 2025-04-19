#include<stdio.h>
#include<stdlib.h>
    int main(){
    int a[10] ={-5,-4,-3,-2,-1,0,1,2,3,4};
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\nchuyen cac so am trong mang gia tri =0\n");
    for(int i=0;i<10;i++){
        if(a[i] < 0){
            a[i] =0;
        }
        printf("%d ",a[i]);
    }
    }
