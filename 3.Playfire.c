#include<stdio.h>
#include<string.h>

char m[5][5];

void gen(char k[]){
 int u[26]={0},i,x=0;
 for(i=0;k[i];i++){
  if(k[i]=='J') k[i]='I';
  if(!u[k[i]-65]){m[x/5][x%5]=k[i];u[k[i]-65]=1;x++;}
 }
 for(i=0;i<26;i++){
  if(i+65=='J') continue;
  if(!u[i]){m[x/5][x%5]=i+65;x++;}
 }
}

void pos(char c,int *r,int *c1){
 int i,j;
 if(c=='J') c='I';
 for(i=0;i<5;i++) for(j=0;j<5;j++) if(m[i][j]==c){*r=i;*c1=j;}
}

void enc(char t[]){
 int i,r1,c1,r2,c2;
 for(i=0;t[i];i+=2){
  pos(t[i],&r1,&c1);
  pos(t[i+1],&r2,&c2);
  if(r1==r2) printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
  else if(c1==c2) printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
  else printf("%c%c",m[r1][c2],m[r2][c1]);
 }
}

int main(){
 char k[50],t[50];
 printf("Key: "); scanf("%s",k);
 printf("Text: "); scanf("%s",t);
 gen(k);
 printf("Cipher: ");
 enc(t);
}


output:
Key: MONARCHY
Text: INSTRUMENTS
Cipher: GATLMZCLRQXA
