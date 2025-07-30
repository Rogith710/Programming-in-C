#include<stdio.h>
void main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    int arr3[m+n];
    int i=0,j=0,ind=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            if(ind==0 || arr3[ind-1]!=arr1[i]){
                arr3[ind]=arr1[i];
                ind++;
            }
            i++;
        }
        else{
            if(arr2[j]<arr1[i]){
                if(ind==0 || arr3[ind-1]!=arr2[j]){
                    arr3[ind]=arr2[j];
                    ind++;
                }
                j++;
            }
        }
    }
    while(i<m){
        if(ind==0 || arr3[ind-1]!=arr1[i]){
            arr3[ind]=arr1[i];
            ind++;
        }
        i++;
    }
    while(j<n){
        if(ind==0 || arr3[ind-1]!=arr2[j]){
            arr3[ind]=arr2[j];
            ind++;
        }
        j++;
    }
    for(int i=0;i<ind;i++){
        printf("%d ",arr3[i]);
    }
}
