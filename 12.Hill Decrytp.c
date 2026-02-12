#include<stdio.h>
int main(){
 int inv[2][2]={{7,22},{19,9}};
 char c[20]; int i;
 scanf("%s",c);
 for(i=0;c[i];i+=2){
  printf("%c",((inv[0][0]*(c[i]-65)+inv[0][1]*(c[i+1]-65))%26)+65);
  printf("%c",((inv[1][0]*(c[i]-65)+inv[1][1]*(c[i+1]-65))%26)+65);
 }
}
