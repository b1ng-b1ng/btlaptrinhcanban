#include<stdio.h>
#include<math.h>
int main(){
    int x;
    int tong =0;
    for(int i=0;i<10;i++){
        scanf("%d",&x);
        tong+=x;
    }
    printf("%d",tong);
}
