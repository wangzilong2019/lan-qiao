#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int la,i,flag=0;
	gets(a);
	for(i=0;i<la;i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d",i+1);
	}
	else{
		printf("0");
	} 
	return 0;
}
