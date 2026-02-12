#include<stdio.h>

int main(){
    int L,R,K,temp;

    printf("Enter L R K: ");
    scanf("%d%d%d",&L,&R,&K);

    temp=L;
    L=R;
    R=temp^(R^K);

    printf("After Round L=%d R=%d",L,R);
    return 0;
}
