#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d:",n/3600);
	printf("%d:",n%3600/60);
	printf("%d",n%3600%60);
	return 0;
} 
