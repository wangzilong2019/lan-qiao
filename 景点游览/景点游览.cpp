#include<stdio.h>
#define MAX 1000
int main(){
	int j,k,i,n,a[MAX],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[k]){
				k=j;
			}
		}
		temp=a[k];
		a[k]=a[i];
		a[i]=temp; 
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
