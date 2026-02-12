#include<stdio.h>
#include<string.h>

int main(){
 char p[100],c[100];
 int a,b,i;
 printf("Text: "); scanf("%s",p);
 printf("a b: "); scanf("%d%d",&a,&b);
 for(i=0;p[i];i++) c[i]=((a*(p[i]-65)+b)%26)+65;
 c[i]=0;
 printf("Cipher: %s",c);
}


output:
Text: HELLO
a b: 5 8
Cipher: RCLLA
