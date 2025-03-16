#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll kq(int n) {
    if(n == 0 || n == 1) return 1;
    return kq(n - 1) * n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", kq(n));
}
