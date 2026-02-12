#include<stdio.h>
#include<string.h>

int main(){
    char msg[100];

    printf("Enter message bits: ");
    scanf("%s",msg);

    strcat(msg,"1");
    while(strlen(msg)%8!=0)
        strcat(msg,"0");

    printf("Padded Message: %s",msg);
    return 0;
}
