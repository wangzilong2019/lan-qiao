#include<stdio.h>
int main(){
	char a[21][21]={"zero","one","two","three","four","five","six","senve","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteem","nineteen","twenty"};
	char b[10][10]={"twenty","thirty","forty","fifty"};
	int h,m;
	scanf("%d%d",&h,&m);
	if(m==0){
		if(h<=20){
			printf("%s o'clock",a[h]);
		}
		else{
			printf("%s %s o'clock",a[20],a[h-20]);
		}
	}
	else{
		if(h<=20){
			printf("%s ",a[h]);
		}
		else{
			printf("%s %s ",a[20],a[h-20]);
		}
		if(m<=20){
			printf("%s",a[m]);
		}
		else{
			printf("%s %s",b[m/10-2],a[m%10]);
		}
	}

	return 0;
}
