#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    scanf("%d",&n);
    n=n<0?-n:n;
    printf("%d",(int)(log10(n)+1));
}
