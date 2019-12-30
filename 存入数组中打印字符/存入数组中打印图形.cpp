#include<stdio.h>
int main(){
	char a[41];
	int i,n,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			a[j]=' ';
		}
		for(k=1;k<=2*i-1;k++){
			a[j]='*';
			j++; 
		}
		for(k=0;k<n-i;k++){
			a[j]=' ';
			j++;
		} 
		printf("%s\n",a);
	}
	return 0;
}
