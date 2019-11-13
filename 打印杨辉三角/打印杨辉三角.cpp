#include<stdio.h>
#define MAX 40
int main(){
	int a[MAX][MAX],i,j,n;
	scanf("%d",&n);/*打印前n行杨辉三角*/ 
	a[0][0]=1;
	for(i=0;i<n;i++){
		a[i][0]=a[i][i]=1;
		for(j=1;j<i;j++){
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		} 
	}
	for(i=0;i<n;i++){
	for(j=0;j<=i;j++){
		printf("%d",a[i][j]);
		printf(" ");
	}
	printf("\n");
}
	
	return 0;
}
