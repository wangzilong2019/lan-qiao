#include <stdio.h>
int main(){
 int a,b,i,n,j;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++){
  	printf("%d=",i);
    n=i;
    j=2;
    while(n!=j){
         for(j=2;j<n;j++){
          	if(n%j==0&&n!=j){
           		printf("%d*",j);
     			n=n/j;
     			break; 
    		}
   		}
          
   }
    printf("%d\n",n);
  }
 return 0; 
 }
 
 

