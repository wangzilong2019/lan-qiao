#include<stdio.h>
int IsHuiWen(int i){
	int j;
	for(j=2;j<i;j++){
		if(i%j==0){
			break;
		}
	}
	if(i==j){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n%i==0 && IsHuiWen(i)==1){
			if(n==i){
				printf("%d",i);
			}
			else{
				printf("%d*",i);
				n=n/i;
				i=1;
			}
		}
	}
	return 0;
}
