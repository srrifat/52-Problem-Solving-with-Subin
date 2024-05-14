#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i =1; i<= t; i++){
        scanf("%d",&n);
        int s1=n%10;
        int s2 =n/10000;
        printf("Sum = %d\n",s1+s2);
    }
    return 0;

}
