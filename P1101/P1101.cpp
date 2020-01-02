#include<stdio.h>
#define MAX 100
typedef struct{
	char MC[MAX];
	double DJ;
	int SL;
}prut;
int main(){
	prut goods[MAX];
	int N,i;
	double sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %lf %d",goods[i].MC,&goods[i].DJ,&goods[i].SL);
		sum=sum+(goods[i].DJ)*(goods[i].SL);
	}
	printf("%.6lf",sum);
	return 0;
} 
