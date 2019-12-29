#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	int i,count=0,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]<='9' && a[i]>='0'){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
