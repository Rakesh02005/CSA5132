#include<stdio.h>
#include<string.h>

int main(){
 char p[100],k[100],c[100];
 int i;
 printf("Text: "); scanf("%s",p);
 printf("Key: "); scanf("%s",k);
 for(i=0;p[i];i++) c[i]=((p[i]+k[i%strlen(k)]-130)%26)+65;
 c[i]=0;
 printf("Cipher: %s",c);
}

output:
Text: ATTACK
Key: KEY
Cipher: KXRKGI
