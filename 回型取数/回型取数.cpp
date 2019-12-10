#include<stdio.h>
#include<string.h>
int main(){
	int num[200][200],flag[200][200];
	int i,j,t,m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	t=m*n;
	memset(flag,1,sizeof(flag));
	i=0;
	j=0;
	while(t>0){
		while(i<m && flag[i][j]){
		printf("%d",num[i][j]);
		flag[i][j]=0;
		t--;
		i++;
		if(t!=0){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	i--;
	j++;
	while(j<n && flag[i][j]){
		printf("%d",num[i][j]);
		flag[i][j]=0;
		t--;
		j++;
		if(t!=0){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	i--;
	j--;
	while(j>=0 && flag[i][j]){
		printf("%d",num[i][j]);
		flag[i][j]=0;
		t--;
		j--;
		if(t!=0){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	j++;
	i--;
	while(i>=0 && flag[i][j]){
		printf("%d",num[i][j]);
		flag[i][j]=0;
		t--;
		i--;
		if(t!=0){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	i++;
	j++;
	}
	return 0;
} 
