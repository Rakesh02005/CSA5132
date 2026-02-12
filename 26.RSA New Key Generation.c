#include<stdio.h>
int main(){
 int p=13,q=17,n,phi,e=5,d=1;
 n=p*q;
 phi=(p-1)*(q-1);
 while((d*e)%phi!=1) d++;
 printf("Public:(%d,%d) Private:%d",e,n,d);
}
