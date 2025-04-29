#include<stdio.h>
void memcp(char* x,char* y, int z)
{
    for(int i=0;i<z;i++){
        x[i]=y[i];
    }
x[z] = ‘\0’;
}
void main()
{
    char x[100]="this is rogith",y[50]="this is my string";
    
    memcp(x,y,10);
    printf("%s",x);
}
