#include<stdio.h>

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    char p[100];
    int a,b,i;

    printf("Enter Text: ");
    scanf("%s",p);

    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    if(gcd(a,26)!=1){
        printf("Invalid a (Not One-To-One)");
        return 0;
    }

    for(i=0;p[i];i++){
        p[i]=((a*(p[i]-65)+b)%26)+65;
    }

    printf("Cipher: %s",p);
    return 0;
}
