#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int * p1=&x;
    int *p2=&y;
    int *p3;
    *p3 = *p1;
    *p1 = *p2;
    *p2 = *p3;
    printf("%d %d",*p1,*p2);
    return 0;
}
