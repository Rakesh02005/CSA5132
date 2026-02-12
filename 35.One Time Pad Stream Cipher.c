#include<stdio.h>
#include<string.h>

int main(){
    char p[100];
    int k[100],i;

    printf("Enter plaintext: ");
    scanf("%s",p);

    printf("Enter key stream numbers:\n");
    for(i=0;p[i];i++)
        scanf("%d",&k[i]);

    printf("Cipher: ");
    for(i=0;p[i];i++)
        printf("%c",((p[i]-65+k[i])%26)+65);

    return 0;
}
