#include<stdio.h>
int main(){
	double x;
	int n;
	scanf("%lf",&x);
	if((int)x!=x){
		printf("No");
	}
	else{
		int y=(int)x;
		if(y/2==0||y/3==0||y/5==0){
			printf("No");
		}
		else{
			for(n=0;y!=0;n++){
				y/=10;
			}
			if(n/2==0||n/3==0||n/5==0){
				printf("No");
			}
			else{
				printf("Yes");
			}
		}
	}
	return 0;
}
