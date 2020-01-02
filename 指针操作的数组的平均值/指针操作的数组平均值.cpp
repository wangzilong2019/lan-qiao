#include<stdio.h>
#define MAX 100
int main(){
	int n,i,*p,a[MAX];
	int sum=0;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++){
		scanf("%d",p++);
	}
	p=a;
	for(i=0;i<n;i++){
		sum+=*(p++);
	}
	printf("%d",sum/n);
	return 0;
} 
