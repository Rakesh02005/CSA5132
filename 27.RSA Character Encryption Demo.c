#include<stdio.h>
int main(){
 int m,e=3,n=33,c=1,i;
 scanf("%d",&m);
 for(i=0;i<e;i++) c=(c*m)%n;
 printf("%d",c);
}
