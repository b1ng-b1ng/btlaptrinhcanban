#include<stdio.h>
#include<math.h>
int main(){
	int f1=1,f2=2,n;
	scanf("%d",&n);
	long long fn;
	if(n==1) {
		printf("1");
	return 0;
	}
	else if(n==2){
		printf("2");
		return 0;
	}
	for(int i=3;i<=n;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	printf("%lld",fn);
}
