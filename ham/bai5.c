#include<stdio.h>
#include<stdlib.h>
void change(int n,int x)
{
    char a[32];
    if( n==0)
    {
        printf("0");
        return ;
    }
    int idx=0;
    char c[] ="0123456789ABCDEF";
    while( n !=0)
    {
        a[idx++] = c[n%x];
        n/=x;
    }
    for(int i = idx-1; i>=0; i--)
    {
        printf("%c ",a[i]);
    }
}
int main()
{
    int n;
    printf("nhap so thap phan n=");
    scanf("%d",&n);
    printf("-------------------------\n");
    printf("\nChuyen sang co so 2:");
    change(n,2);
    printf("\nChuyen sang co so 8:");
    change(n,8);
    printf("\nChuyen sang co so 16:");
    change(n,16);
    printf("\n-------------------------");
    return 0;
}
