#include<stdio.h>
#include<string.h>

int main(){
 char p[50],c[50],k[]="CIPHERABDFGJKLMNOQSTUVWXYZ";
 int i;
 printf("Text: "); scanf("%s",p);
 for(i=0;p[i];i++) c[i]=k[p[i]-65];
 c[i]=0;
 printf("Cipher: %s",c);
}

op:
Text: HELLO
Cipher: BDKKM
