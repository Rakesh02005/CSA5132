#include<stdio.h>

int main(){
    int k,k1,k2;

    printf("Enter base key: ");
    scanf("%d",&k);

    k1=k<<1;
    if(k & 0x80) k1^=0x1B;

    k2=k1<<1;
    if(k1 & 0x80) k2^=0x1B;

    printf("Subkey1 = %d\n",k1);
    printf("Subkey2 = %d\n",k2);

    return 0;
}
