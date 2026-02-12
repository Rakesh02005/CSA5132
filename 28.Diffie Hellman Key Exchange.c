#include<stdio.h>
#include<math.h>

long modexp(long a,long x,long q){
    long res=1;
    int i;
    for(i=0;i<x;i++)
        res=(res*a)%q;
    return res;
}

int main(){
    long q,a,xa,xb,ya,yb,ka,kb;

    printf("Enter q and a: ");
    scanf("%ld%ld",&q,&a);

    printf("Enter private keys xa xb: ");
    scanf("%ld%ld",&xa,&xb);

    ya=modexp(a,xa,q);
    yb=modexp(a,xb,q);

    ka=modexp(yb,xa,q);
    kb=modexp(ya,xb,q);

    printf("Shared Key A: %ld\n",ka);
    printf("Shared Key B: %ld\n",kb);

    return 0;
}
