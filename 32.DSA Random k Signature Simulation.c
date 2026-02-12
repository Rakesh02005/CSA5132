#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int sig1,sig2;

    srand(time(0));

    sig1=rand()%1000;
    sig2=rand()%1000;

    printf("Signature1 = %d\n",sig1);
    printf("Signature2 = %d\n",sig2);

    return 0;
}
