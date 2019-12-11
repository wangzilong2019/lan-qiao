#include<stdio.h>
void put(int n){
	if(n==1){
		printf("A");
	}
	else{
		put(n-1);
		printf("%c",'A'+n-1);
		put(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	put(n);
	printf("\n");
	return 0;
} 
