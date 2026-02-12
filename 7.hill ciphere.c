#include<stdio.h>
#include<string.h>

int main(){
 int k[2][2]={{9,4},{5,7}},i;
 char p[10],c[10];
 printf("Text: "); scanf("%s",p);
 for(i=0;i<strlen(p);i+=2){
  c[i]=((k[0][0]*(p[i]-65)+k[0][1]*(p[i+1]-65))%26)+65;
  c[i+1]=((k[1][0]*(p[i]-65)+k[1][1]*(p[i+1]-65))%26)+65;
 }
 c[i]=0;
 printf("Cipher: %s",c);
}

output:
Text: HELP
Cipher: ZEBB
