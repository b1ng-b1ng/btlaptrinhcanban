#include<stdio.h>
#include<math.h>
int main(){
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long min=1e9;
	long long max =1e-9;
	int vitrimax=0;
	int vitrimin=0;
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min = a[i];
			vitrimin=i;
		}
		if(max<a[i]){
			max=a[i];
			vitrimax=i;
		}
	}
	printf("min la %d %d\n",min,vitrimin);
	printf("max la %d %d",max,vitrimax);
}
