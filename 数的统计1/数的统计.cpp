#include<stdio.h>
#define MAX 1000
typedef struct{
	int a;
	int flag;
	int count;
}NUM_TYPE;
int main(){
	NUM_TYPE num[MAX];
	int n,i,j,k,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i].a);
		num[i].flag=1;
		num[i].count=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i].flag==1 && num[j].flag==1){
				if(num[i].a==num[j].a && i!=j){
					num[j].flag=0;
					(num[i].count)++;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(num[i].flag && num[j].flag){
				if(num[j].a<num[k].a){
					k=j;
				}
			}
		}
		temp=num[i].a;
		num[i].a=num[k].a;
		num[k].a=temp;
		temp=num[i].count;
		num[i].count=num[k].count;
		num[k].count=temp;
	}
	for(i=0;i<n;i++){
		if(num[i].flag){
			printf("%d %d\n",num[i].a,num[i].count);
		}
	}
	return 0;
} 
