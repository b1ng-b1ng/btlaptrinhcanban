#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a, ll b){
	if(a==0|| b==0){
		return a+b;
	}
	while(b!=0){
		ll r = a% b;
		a =b ;
		b =r; 
	}
	return a;
}
ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}
	int main(){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld",gcd(a,b),lcm(a,b));
	}
