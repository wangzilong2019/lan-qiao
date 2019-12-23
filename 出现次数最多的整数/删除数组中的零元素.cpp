#include<stdio.h>
#define MAX 100
int CompactIntegers(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		if(a[i]==0){
			for(j=i+1;j<n;j++){
				a[j-1]=a[j];
			}
			n--;
			i--;
		}
	}
	return n;
}
int main(){
	int n,a[MAX],i,result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	result=CompactIntegers(a,n);
	printf("%d\n",result);
	for(i=0;i<result;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
