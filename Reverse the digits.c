#include<stdio.h>
void main()
{
    int n,x=0;
    scanf("%d",&n);
    while(n>0){
        x+=n%10;
        n/=10;
        if(n>0){
            x*=10;
        }
    }
    printf("%d",x);
}
