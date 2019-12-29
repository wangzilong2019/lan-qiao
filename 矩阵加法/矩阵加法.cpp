#include<stdio.h>
#define MAX 100
int main(){
	int a[MAX][MAX],b[MAX][MAX];
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]+=b[i][j]; 
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(j<m-1){
			printf("%d ",a[i][j]);
		}
		else{
			printf("%d\n",a[i][j]);
		}
		}
	}
	return 0;
}
