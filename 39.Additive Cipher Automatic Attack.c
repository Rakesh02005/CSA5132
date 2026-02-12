#include<stdio.h>
#include<string.h>

int main(){
    char c[100];
    int i,k;

    printf("Enter Cipher: ");
    scanf("%s",c);

    for(k=0;k<26;k++){
        printf("Key %d : ",k);
        for(i=0;c[i];i++){
            printf("%c",((c[i]-65-k+26)%26)+65);
        }
        printf("\n");
    }

    return 0;
}
