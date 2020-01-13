#include<stdio.h>
#define MAX 1000
int main(){
	int n,count,i,j,temp,k;
	double a[MAX],c,sum;
	sum=0;
	count=0;
	scanf("%lf %d",&c,&n);
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(sum>=c){
			if(sum>c){
				count=i;
			}
			else{
				count=i+1;
			}
			break;
		}
	} 
	printf("%d",count);
	return 0;
}
