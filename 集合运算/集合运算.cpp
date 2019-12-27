#include<stdio.h>
#define MAX 1000
int main(){
	int a[MAX],b[MAX],n_temp[MAX],c_temp[MAX];
	int n,m,i,j,k,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int p=0;
	int q=0;
	int flag;
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<m;j++){
			if(a[i]==b[j]){
				flag=1;
				n_temp[q]=a[i];
				q++;
			}

		}
		if(flag==0){
			c_temp[p]=a[i];
			p++;
		}
	}
	int la,lb,new_n,new_c;
	new_n=q;
	new_c=p;
	for(i=m,k=0;i<p+m,k<p;k++,i++){
		b[i]=c_temp[k];
	}
	for(i=0;i<q;i++){
		printf("%d ",n_temp[i]);
	}
	printf("\n");
	for(i=0;i<p+m-1;i++){
		for(j=i+1;j<p+m;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<p+m;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	for(i=0;i<p;i++){
		printf("%d ",c_temp[i]);
	}
	return 0;
}
