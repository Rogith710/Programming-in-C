#include<stdio.h>
#include<string.h>
int main()
{
    char x[50],y[50],z[51];
    int q=0;
    printf("Enter the number a:");
    scanf("%s",x);
    printf("Enter the number b:");
    scanf("%s",y);
    int m,n;
    if(strlen(x)<strlen(y)){
        strcpy(z,x);
        strcpy(x,y);
        strcpy(y,z);
    }
    m=strlen(x);
    n=strlen(y);
    
    for(int i=0;i<m;i++){
        if(i<n && ((int)x[i]<48 || (int)x[i]>57 ||  (int)y[i]<48 || (int)y[i]>57)){
            printf("Invalid Input");
            return 0;
        }
        else if((int)x[i]<48 || (int)x[i]>57){
            printf("Invalid Input");
            return 0;
        }
    }
    for(int i=m-1,j=n-1;i>=0;i--){
        
        if(j>=0){
            if((int)x[i]-48+(int)y[j]-48+q>9){
            z[m-i-1]=(char)((((int)x[i]-48+(int)y[j]-48+q)%10)+48);
            q=1;
         }
            else{
            z[m-i-1]=(char)(((int)x[i]-48+(int)y[j]-48+q)+48);
            q=0;
         }
         j--;
        }
        else{
            if(z[m-i-1]=(char)((int)x[i]+q-48)>9){
                z[m-i-1]=(char)((((int)x[i]+q-48)%10)+48);
                q=1;
            }
            else{
                z[m-i-1]=(char)((int)x[i]+q);
                q=0;
            }
        }
        
    }
    printf("The sum of the numbers a and b is ");
    if(q==1){
        printf("%d",q);
    }
    for(int i=m-1;i>=0;i--){
        printf("%c",z[i]);
    }
    return 0;


}
