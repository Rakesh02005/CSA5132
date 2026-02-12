#include<stdio.h>

int main(){
    int lanes[10]={0};
    int i,steps=0;

    for(i=0;i<10;i++){
        if(lanes[i]==0){
            lanes[i]=1;
            steps++;
        }
    }

    printf("Steps to fill zero lanes: %d\n",steps);
    return 0;
}
