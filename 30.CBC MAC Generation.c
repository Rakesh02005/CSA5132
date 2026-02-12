#include<stdio.h>

int main(){
    int msg[4],k,mac,i;

    printf("Enter 4 message blocks: ");
    for(i=0;i<4;i++) scanf("%d",&msg[i]);

    printf("Enter key: ");
    scanf("%d",&k);

    mac=msg[0]^k;
    for(i=1;i<4;i++)
        mac=msg[i]^mac;

    printf("MAC = %d",mac);
    return 0;
}
