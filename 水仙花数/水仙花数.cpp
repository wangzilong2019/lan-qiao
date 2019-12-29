#include<stdio.h>
int main(){
	int a,b,c,k;
	for(k=100;k<=999;k++){
		a=k/100;
		b=k/10%10;
		c=k%10;
		if(k==a*a*a+b*b*b+c*c*c){
			printf("%d\n",k);
		}
	}
	return 0;
}
