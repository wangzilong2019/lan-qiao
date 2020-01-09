#include<stdio.h>
#define MAX 21
int a[MAX];
void swap(int a[],int i){
	int m=0,n=i-1,temp;
	while(m<n){
		temp=a[m];
		a[m]=a[n];
		a[n]=temp;
		m++;
		n--;
	}
}
int main(){
	int i=0,e,j;
	while(1){
		scanf("%d",&e);
		if(e!=0){
			a[i]=e;
			i++;
		}
		else{
			break;
		}
	}
	swap(a,i);
	for(j=0;j<i;j++){
		printf("%d ",a[j]);
	}
	return 0;
} 
