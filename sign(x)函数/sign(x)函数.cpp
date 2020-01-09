#include<stdio.h>
#include<math.h>
int main(){
	float x;
	scanf("%f",&x);
	if(x>0){
		printf("1");
	}
	if(x<0){
		printf("-1");
	}
	if(fabs(x)<1e-6){
		printf("0");
	}
	return 0;
}
