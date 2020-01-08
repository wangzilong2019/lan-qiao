#include<stdio.h>
#include<string.h>
#define MAX 200
int main(){
	char a[MAX],b[MAX];
	int i;
	gets(a);
	gets(b);
	int la,lb;
	la=strlen(a);
	lb=strlen(b);
	for(i=la;i<la+lb;i++){
		a[i]=b[i-la];
	}
	a[la+lb]='\0'; 
	puts(a);
	return 0;
}
