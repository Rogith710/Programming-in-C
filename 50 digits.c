#include<stdio.h>
#include<string.h>
void add(char* x,char* y,int m){
    int z[50],q=0;
    for(int i=m-1;i>=0;i--){
        if(x[i]+y[i]+q-('0'+'0')>9){
            z[i]=(((int)(x[i]+y[i]+q))-('0'+'0'))%10;
            q=1;
        }
        else{
            z[i]=((int)(x[i]+y[i]+q))-('0'+'0');
            q=0;
        }
    }
    if(q==1){
        printf("%d",1);
    }
    for(int i=0;i<m;i++){
        printf("%d",z[i]);
    }
}
void sub(char* x,char* y,int m,int flag){
    int z[50],q=0;
    for(int i=m-1;i>=0;i--){
        if((int)(x[i]-y[i])-q<0){
            z[i]=10+(int)(x[i]-y[i])-q;
            q=1;
        }
        else{
            z[i]=(int)(x[i]-y[i])-q;
            q=0;
        }
    }
    if(flag==1){
        printf("-");
    }
    flag=1;
    for(int i=0;i<m;i++){
        if(flag==1 && z[i]==0){
            
        }
        else{
            flag=0;
            printf("%d",z[i]);
        }
        
    }
}
void main()
{
    char x[50],y[50],z[51];
    int l,flag=0;
    printf("Enter the number a :");
    scanf("%s",x);
    printf("Enter the number b :");
    scanf("%s",y);
    printf("Enter 1 for addition and 2 for subtraction :");
    scanf("%d",&l);
    int m,n;
    if(strlen(x)<strlen(y) || ((strlen(x)==strlen(y) && x<y))){
        strcpy(z,x);
        strcpy(x,y);
        strcpy(y,z);
        flag = 1;
    }
    m=strlen(x);
    n=strlen(y);
    
    for(int i=0;i<m;i++){
        if(i<n && ((int)x[i]<48 || (int)x[i]>57 ||  (int)y[i]<48 || (int)y[i]>57)){
            printf("Invalid Input");
            return;
        }
        else if((int)x[i]<48 || (int)x[i]>57){
            printf("Invalid Input");
            return;
        }
    }
    for(int i=m-1,j=n-1;i>=0;i--,j--){
        if(i>m-n-1){
            y[i]=y[j];
        }
        else{
            y[i]='0';
        }
    }
    if(l==1){
        add(x,y,m);
    }
    else if(l==2){
        sub(x,y,m,flag);
    }
    else{
        printf("Invalid Input");
    }
    return;

}
