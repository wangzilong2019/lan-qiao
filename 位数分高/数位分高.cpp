#include<stdio.h>
#include<string.h>
#define MAX 4
int main(){
	char a[MAX];
	gets(a);
	int la,i;
	la=strlen(a);
	for(i=0;i<la-1;i++){
		printf("%c ",a[i]);
	}
	printf("%c",a[la-1]);
	return 0;
}
