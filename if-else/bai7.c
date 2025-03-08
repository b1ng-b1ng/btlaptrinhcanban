#include<stdio.h>
#include<math.h>
	int main(){
	float diem;
	scanf("%f",&diem);
	if(diem<5){
		printf("yeu\n");
	}	
    else if (diem >= 5 && diem < 7) {
        printf("Trung binh\n");
    } else if (diem >= 7 && diem < 8) {
        printf("Kha\n");
    } else if (diem >= 8 && diem < 9) {
        printf("Gioi\n");
    } else if (diem >= 9 && diem <= 10) {
        printf("Xuat sac\n");
    } else {
        printf("sai");
    }
				return 0;
	}

