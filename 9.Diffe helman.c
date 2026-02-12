#include<stdio.h>
#include<math.h>

int main(){
 int q=23,a=5,xa=6,xb=15,ya,yb,ka,kb;
 ya=(int)pow(a,xa)%q;
 yb=(int)pow(a,xb)%q;
 ka=(int)pow(yb,xa)%q;
 kb=(int)pow(ya,xb)%q;
 printf("Key: %d",ka);
}

output:
Key: 2
