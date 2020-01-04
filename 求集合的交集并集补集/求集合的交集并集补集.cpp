#include<stdio.h>
#define MAX 1000
typedef struct{
	int a;
	int flag;
}NUM_TYPE;
int main(){
	int n,m,i,j,k,temp;
	NUM_TYPE A[MAX],B[MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i].a);
		A[i].flag=1;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&B[i].a);
		B[i].flag=1;
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(A[j].a<A[k].a){
				k=j;
			}
			temp=A[i].a;
			A[i].a=A[k].a;
			A[k].a=temp;
		}
	}
	for(i=0;i<m;i++){
		k=i;
		for(j=i+1;j<m;j++){
			if(B[j].a<B[k].a){
				k=j;
			}
			temp=B[i].a;
			B[i].a=B[k].a;
			B[k].a=temp;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(A[i].a==B[j].a){
				A[i].flag=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(A[i].flag==0){
			printf("%d ",A[i].a);
		}
	}
	printf("\n");
	i=0;
	j=0;
	while(i<n && j<m){
		if(A[i].flag==1){
			if(A[i].a<B[j].a){
				printf("%d ",A[i].a);
				i++;
			}
			else{
				printf("%d ",B[i].a);
				j++;
			}
		}
		else{
			i++;
		}
	}
	while(i<n){
		if(A[i].flag){
			printf("%d ",A[i].a);
			i++;
		}
	}
	while(j<m){
		printf("%d ",B[j].a);
		j++;
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(A[i].flag==1){
			printf("%d ",A[i].a);
		}
	}
	return 0;
}
