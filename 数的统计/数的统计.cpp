#include<stdio.h>
typedef struct{
	int a;
	int count=0;
	int flag=1;
}NUM;
int main(){
	NUM num[1000];
	int n,i,j,k,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i].a);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i].a==num[j].a && i!=j && num[j].flag==1 ){
				num[j].count++;
				num[j].flag=0;
			}
		}
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(num[j].a<num[k].a && num[j].flag==1){
				k=j;
			}
			temp=num[k].a;
			num[k].a=num[i].a;
			num[i].a=temp;
			temp=num[k].count;
			num[k].count=num[i].count;
			num[i].count=temp;
			printf("%d %d\n",num[k].a,num[k].count);
		}
	}
	
	return 0;
}
