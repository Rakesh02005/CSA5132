#include<stdio.h>
#include<string.h>

int main(){
    char c[200];
    int f[26]={0},i,max=0,pos=0;

    printf("Enter Cipher: ");
    scanf("%s",c);

    for(i=0;c[i];i++){
        f[c[i]-65]++;
    }

    for(i=0;i<26;i++){
        if(f[i]>max){
            max=f[i];
            pos=i;
        }
    }

    printf("Most Frequent Letter: %c\n",pos+65);
    printf("Possible Mapping: %c -> E\n",pos+65);

    return 0;
}
