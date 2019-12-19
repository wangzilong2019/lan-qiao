#include<stdio.h>
int CN(int n,int k){
	if(n==k){
		return 1;
	}
	if(k==0){
		return 1;
	}
	return CN(n-1,k)+CN(n-1,k-1);
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",CN(n,k));
	return 0;
} 

//#include<stdio.h>
//int gcd(int n){
//	if(n==0){
//		return 1;
//	}
//	else{
//		return n*gcd(n-1);
//	}
//}
//int CN(int k,int n){
//	if(n==0||k==n){
//		return 1;
//	}
//	else{
//		return gcd(k)/(gcd(k-n)*gcd(n));
//	}
//}
//int main(){
//	int k,n;
//	scanf("%d %d",&n,&k);
//	printf("%d",CN(k,n));
//	return 0;
//}
