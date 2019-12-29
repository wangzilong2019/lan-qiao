#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c<0){
		printf("Error");
	}
	else{
		if(b*b-4*a*c>0){
			printf("x1 = %f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
			printf("x2 = %f",(-b-sqrt(b*b-4*a*c))/(2*a));
		}
		else{
			printf("x1 = %f",(-b)/(2*a));
		}

	}
	return 0;
}
