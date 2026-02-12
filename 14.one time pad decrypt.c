#include<stdio.h>
#include<string.h>
int main(){
 char c[50]; int k[50],i;
 scanf("%s",c);
 for(i=0;c[i];i++) scanf("%d",&k[i]);
 for(i=0;c[i];i++)
  printf("%c",((c[i]-65-k[i]+26)%26)+65);
}
