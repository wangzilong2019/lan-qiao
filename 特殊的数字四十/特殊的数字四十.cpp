#include<stdio.h>
int main(){
	int k,a,b,c,d;
	for(k=1000;k<=9999;k++){
		a=k/1000;
		b=k/100%10;
		c=k%100/10;
		d=k%10;
		if(a+b+c+d==10){
			printf("%d\n",k);
		}
	}
	return 0;
} 
