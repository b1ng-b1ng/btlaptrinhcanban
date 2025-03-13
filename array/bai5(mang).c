#include<stdio.h>
#include<math.h>
int main(){
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	printf("nhap x di em :");
	scanf("%d",&x);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cnt++;
		}
	}
	printf("%d",cnt);
}
