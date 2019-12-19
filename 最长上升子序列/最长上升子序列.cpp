#include<stdio.h>
int main(){
	int arr[1000],n,max,k;
	max=0;
	k=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			k++;
			if(k>max){
				max=k;
			}
		}
		else{
			max=0;
		}
	}
	printf("%d",max);
	return 0;
}¡¢ 
