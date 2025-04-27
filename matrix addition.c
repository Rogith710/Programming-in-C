#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,y;
    printf("Enter the number of rows :");
    scanf("%d",&x);
    printf("Enter the number of coloumns :");
    scanf("%d",&y);
    int * matrix1 = (int *)malloc(sizeof(int) * x * y);
    int * matrix2 = (int *)malloc(sizeof(int) * x * y);
    int * matrix3 = (int *)malloc(sizeof(int) * x * y);
    printf("Enter the elements of Matrix1 :\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",matrix1 + y*i + j);
        }
    }
    printf("Enter the elements of Matrix2 :\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",matrix2 + y*i + j);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            *(matrix3 + y*i + j) = *(matrix1 + y*i + j) + *(matrix2 + y*i + j) ;
            printf("%d ",*(matrix3 + y*i + j));
        }
        printf("\n");
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
    
}
