#include<stdio.h>
int main(){
	int m,s,n,A[200][200],B[200][200],C[200][200]={0};
	int i,j,k;
	scanf("%d %d %d",&m,&s,&n);
	for(i=0;i<m;i++){
		for(j=0;j<s;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<s;i++){
		for(j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(k=0;k<s;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
