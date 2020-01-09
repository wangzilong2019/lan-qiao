#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
	int k,i;
	char a[MAX],b[MAX];
	int la,lb;
	int flag=0;
	gets(a);
	gets(b);
	scanf("%d",&k);
	for(i=0;i<k;i++){
		if(a[i]>b[i]){
			flag=1;
			break;
		}
		if(a[i]<b[i]){
			flag=-1;
			break;
		}
	}
	printf("%d",flag);
	return 0;
}
