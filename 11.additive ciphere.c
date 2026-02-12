#include<stdio.h>
#include<string.h>

int main(){
 char p[50]; int k,i;
 printf("Text: "); scanf("%s",p);
 printf("Key: "); scanf("%d",&k);
 for(i=0;p[i];i++) p[i]=((p[i]-65+k)%26)+65;
 printf("Cipher: %s",p);
}


op:
Text: DATA
Key: 4
Cipher: HEXE
