#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1,k=n;i<=n;i++,k--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("*");
		}
		for(int j=1;j<=m;j++){
			printf(" ");
		}
		for(int j=2*k-1;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

