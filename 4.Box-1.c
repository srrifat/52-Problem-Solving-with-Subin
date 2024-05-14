#include<stdio.h>
int main(){
    int n,t,k;
    scanf("%d",&t);
    for(k=1; k<=t;k++){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("*");
            }
            printf("\n");
        }
    if(t!=k){
        printf("\n");
    }
    }


}
