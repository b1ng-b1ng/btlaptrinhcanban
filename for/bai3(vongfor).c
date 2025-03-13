#include<stdio.h>
#include<math.h>
int main(){
	int tong=0;
  	for(int i=1;i<=100;i++){
  		if(i%2!=0){
  			tong+=i;
		  }
	  }
	  printf("%d",tong);
}
