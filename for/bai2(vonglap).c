#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<2) printf("sai");
  for(int i=2;i<=sqrt(n);i++){
  	if(n%i==0){
	  printf("sai");
	  return 0;
}
  }
  printf("yes");
}
