#include <stdio.h>
#include <stdlib.h>
#include<math.h>
	int main(){
		int ngay,nam;
		scanf("%d %d",&ngay,&nam);
		switch(ngay){
			case 1 : case 3: case 5 : case 7: case 8: case 10: case 12:
				printf("31");
			case 4 : case 6 : case 9: case 11:
				printf("30");
				case 2:
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
				 
				printf("28");
			}
			else {
					printf("29");
			}
	
		default : 
		printf("sai");
	}
	}
