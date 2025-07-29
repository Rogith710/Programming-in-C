#include<stdio.h>
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=0;
    while(i<n && j<n){
    while(arr[i]!=0 && i<n){
        i++;
    }
    j=i;
    while(arr[j]==0 && j<n){
        j++;
    }
    if(i<n && j<n && arr[i]==0 && arr[j]!=0){
    swap(arr,i,j);
    }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
