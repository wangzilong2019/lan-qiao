#include<stdio.h>
#define MAX 100
#include<string.h>
int main(){
	char a[MAX];
	int flag=0;
	int i,la;
	gets(a);
	la=strlen(a);
	for(i=0;i<la;i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			flag=i+1;
			break;
		}
	}
	printf("%d",flag);
	return 0;
}
