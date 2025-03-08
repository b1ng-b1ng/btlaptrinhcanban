#include<stdio.h>
#define ll long long
ll F[100];
void ktao(){
	F[0] =0;
	f[1]=1;
	for(int i=2; i<=92;i++){
		F[i]=F[i-1]+ F[i-2];
	}
}
