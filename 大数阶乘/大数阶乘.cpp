#include<stdio.h>
int main(){
	int n,i,d,temp,jw,k,a[10000]={1};
	d=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		jw=0;
		for(k=0;k<=d;k++){
			temp=a[k]*i+jw;
			a[k]=temp%10;
			jw=temp/10;
		}
		while(jw){
			a[k]=jw%10;
			k++;
			jw=jw/10;
		}
		d=k-1;
	}
	for(i=d;i>=0;i--)
	printf("%d",a[i]);
	return 0;
} 

