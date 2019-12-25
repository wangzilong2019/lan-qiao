/*#include<stdio.h>
int main(){
	int a,b,r;
	scanf("%d%d",&a,&b);
	while(a%b){
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d",b);
	return 0;
} */
#include<stdio.h>
int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
