#include<stdio.h>
#include<string.h>
int main(){
	char str1[11],str2[11];
	gets(str1);
	gets(str2);
	int la=strlen(str1);
	int lb=strlen(str2);
	if(la!=lb){
		printf("1");
	}
	else{
		if(strcmp(str1,str2)==0){
			printf("2");
		}
		else{
			if(stricmp(str1,str2)==0){
				printf("3");
			}
			else{
				printf("4");
			}
		}
	}
	
	return 0;
}

