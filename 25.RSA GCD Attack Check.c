#include<stdio.h>
int gcd(int a,int b){
 if(b==0) return a;
 return gcd(b,a%b);
}
int main(){
 int p,n;
 scanf("%d%d",&p,&n);
 if(gcd(p,n)>1) printf("Factor Found");
 else printf("Secure");
}
