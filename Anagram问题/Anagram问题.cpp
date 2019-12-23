#include<stdio.h>
#include<string.h>
#define MAX 88
int main(){
	char a[MAX],b[MAX];
	int la,lb,new_la,new_lb;
	int i,j;
	gets(a);
	gets(b); 
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb){
		printf("N");
	}
	else{
		for(i=0;i<la;i++){
			for(j=0;j<lb;j++){
				if(a[i]==b[j] ){
				a[i]='\0';
				b[i]='\0';
			    }
			    else{
			    	if(a[i]==b[j]-32){
			    		a[i]='\0';
			    		b[j]='\0';
					}
					if(a[i]-32==b[j]){
						a[i]='\0';
						b[j]='\0';
					}
				}    
			}
		}
		new_la=strlen(a);
		new_lb=strlen(b);
		if(new_la==0 || new_lb==0){
			printf("Y");
		}
		else{
			printf("N");
		}
	}
	return 0;
} 
