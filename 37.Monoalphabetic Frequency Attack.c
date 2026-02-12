#include<stdio.h>
#include<string.h>

int main(){
    char c[200];
    int f[26]={0},i;

    printf("Enter Cipher Text: ");
    scanf("%s",c);

    for(i=0;c[i];i++){
        if(c[i]>='A' && c[i]<='Z')
            f[c[i]-65]++;
    }

    printf("\nLetter Frequency:\n");
    for(i=0;i<26;i++){
        printf("%c : %d\n",i+65,f[i]);
    }

    return 0;
}
