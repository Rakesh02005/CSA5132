#include<stdio.h>
#include<string.h>

int main(){
    char p[100],k[]="QWERTYUIOPASDFGHJKLZXCVBNM",c[100];
    int i;
    printf("Text: "); scanf("%s",p);
    for(i=0;p[i];i++) c[i]=k[p[i]-65];
    c[i]=0;
    printf("Cipher: %s",c);
}

output:
Text: HELLO
Cipher: ITSSG

