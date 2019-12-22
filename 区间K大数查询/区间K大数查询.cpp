#include<stdio.h>
#define MAX 1001
int main(){
	int a[MAX],n,m,i,j,l[MAX],r[MAX],k[MAX],b[MAX],temp,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d %d",&l[i],&r[i],&k[i]);
	}
	for(i=0;i<m;i++){
		for(j=1;j<=n;j++){
			b[j]=a[j];
		}
		for(j=l[i];j<=r[i]-1;j++){
			for(p=j+1;p<=r[i];p++){
				if(b[j]<b[p]){
					temp=b[j];
					b[j]=b[p];
					b[p]=temp;
				}
			}
		}
		printf("%d\n",b[l[i]+k[i]-1]);
	}
	return 0;
}
