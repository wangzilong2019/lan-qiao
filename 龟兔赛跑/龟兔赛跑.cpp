#include<stdio.h>
int main(){
	int v1,v2,t,s,l,r1,t1,i;
	scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
	r1=0;
	t1=0;
	i=0;
	while(r1<l && t1<l){
		r1=r1+v1;
		t1=t1+v2;
		i++;
		if(r1==l || t1==l){
			break;
		}
		if(r1-t1>=t){
			r1=r1-v1*s;
		}
	} 
	if(r1>t1){
		printf("R\n");
	}
	else{
		if(r1==t1){
			printf("D\n");
		}
		else{
			printf("T\n");
		}
	}
	printf("%d",i);
	return 0;
} 
