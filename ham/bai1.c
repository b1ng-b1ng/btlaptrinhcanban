#include <stdio.h>
#include <stdlib.h>
	double tinh(int x,int y){
		if(x==0){
			if(y<=0){
				printf("error !\n");
			}
			return 0;
		}
		double kq =1.0;
		int y1= abs(y);
		for(int i=0;i<y1;i++){
			kq*=x;
		}
		return (y<0) ? 1.0/kq : kq;
	return kq;
}
	int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(!(x==0 && y<=0)){
			printf("ketqua x mu y = %.3lf",tinh(x,y));	
	}
	else {
		tinh(x,y);
	}
	}
