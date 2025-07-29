#include<stdio.h>
#include<string.h>
void rotate(int arr[],int x,int y){
    int temp;
    while(x<y){
        temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
        x++;
        y--;
    }
}
void main()
{
    char abb[6];
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    scanf("%s",abb);
    k=k%n;
    if(strcmp(abb,"right")==0){
        rotate(arr,0,n-1-k);
        rotate(arr,n-k,n-1);
        rotate(arr,0,n-1);
    }
    else{
        rotate(arr,n-k,n-1);
        rotate(arr,0,n-1-k);
        rotate(arr,0,n-1);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
