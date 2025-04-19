#include <stdio.h>
#include <stdlib.h>

void nhap(int a[][100], int n, int m, char name)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c[%d][%d] = ", name, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void in(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void tong(int a[][100], int b[][100], int c[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void tich(int a[][100], int b[][100], int c[][100], int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int n, m, p;
    printf("Nhap so hang cua ma tran A (n): ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran A (m): ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran B (p): ");
    scanf("%d", &p);

    int a[100][100], b[100][100], cong[100][100], nhan[100][100];

    printf("\nNhap ma tran A:\n");
    nhap(a, n, m, 'A');
    printf("\nNhap ma tran B:\n");
    nhap(b, m, p, 'B');

    printf("\nMa tran A:\n");
    in(a, n, m);
    printf("Ma tran B:\n");
    in(b, m, p);

    tich(a, b, nhan, n, m, p);
    printf("\nTich A * B:\n");
    in(nhan, n, p);

    if (n == m && m == p)
    {
        tong(a, b, cong, n, m);
        printf("\nTong A + B:\n");
        in(cong, n, m);
    }
    else
    {
        printf("\nKhong the cong A + B vi kich thuoc khong giong nhau!\n");
    }

    return 0;
}
