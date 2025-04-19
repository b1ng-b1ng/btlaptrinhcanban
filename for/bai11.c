#include<stdio.h>
#include<stdlib.h>
void change(int n,int a[],int x)
{
    int dem = 0;
    char dat[] ="0123456789ABCDEF";
    while(n > 0)
    {
        a[dem++] = dat[n%x];
        n/=x;
    }
    for(int i=dem-1; i>=0; i--)
    {
        printf("%c ",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("nhap so thap phan:");
    scanf("%d",&n);
    if( n== 0)
    {
        printf("0");
        return 0;
    }
    int a[32];
    printf("Binary:");
    change(n,a,2);
    printf("Octal:");
    change(n,a,8);
    printf("Hexadecimal:");
    change(n,a,16);
}
