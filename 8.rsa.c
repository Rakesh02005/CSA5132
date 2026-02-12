#include<stdio.h>
#include<math.h>

int main(){
 int p=17,q=11,n,e=7,m=8,c=1,i;
 n=p*q;
 for(i=0;i<e;i++) c=(c*m)%n;
 printf("Cipher: %d",c);
}
 output:
Cipher: 57
