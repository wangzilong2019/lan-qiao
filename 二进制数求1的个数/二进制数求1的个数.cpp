#include<stdio.h>
int Binary_Number(int n){
	int a[20];
	int i=0;
	int j;
	int count=0;
	do{
		a[i]=n%2;
		n/=2;
		i++;
	}while(n);
	for(j=i-1;j>=0;j--){
		if(a[j]==1){
			count++;
		}
	}
	return count;
} 
int main(){
	int L,R;
	int n;
	int total_count=0;
	scanf("%d %d",&L,&R);
	for(n=L;n<=R;n++){
		total_count+=Binary_Number(n);
	}
	printf("%d",total_count);
	return 0;
} 
