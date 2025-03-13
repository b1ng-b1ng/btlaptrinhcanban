#include <stdio.h>
#include <stdlib.h>
#include<math.h>
	int main(){
	int n;
	scanf("%d",&n);
	long long gt=1;
	double tong =0;
	for(int i=1;i<=n;i++){
		gt*=i;
		tong+=1.0/gt;
}
	printf("%d %.2lf",gt,tong);
}
