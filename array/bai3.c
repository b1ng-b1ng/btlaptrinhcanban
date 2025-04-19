#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    printf("nhap kich thuoc cua mang a: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("nhap mang a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int tong1 =0,tong2 =0;
    float tbc1 =0,tbc2=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            tong1+=a[i];
        }
        if(a[i]>0)
        {
            tong2+=a[i];
        }
    }
    tbc1 = 1.0*tong1/n;
    tbc2 = 1.0*tong2/n;
    printf("tong so nguyen am la: %d\ntong so nguyen duong la: %d\ntrung binh cong cac so nguyen am la: %.2f\ntrung binh cong cac so nguyen duong la: %.2f\n",tong1,tong2,tbc1,tbc2);
    return 1;
}
