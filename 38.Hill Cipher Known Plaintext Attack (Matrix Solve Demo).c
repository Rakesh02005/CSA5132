#include<stdio.h>

int main(){
    int P[2][2]={{7,4},{11,15}};
    int C[2][2]={{19,2},{3,6}};
    int K[2][2];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            K[i][j]=(C[i][j]-P[i][j]+26)%26;
        }
    }

    printf("Recovered Key Matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",K[i][j]);
        }
        printf("\n");
    }

    return 0;
}
