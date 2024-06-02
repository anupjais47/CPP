//the code is not working 07-Feb-2023
#include<stdio.h>
int main()
{
    int i,num,j,m,n;
    printf("Enter the row and column : ");
    scanf("%d%d",&i,&j);
    int mat[i][j];
    printf("Enter the element of the matrix Mat[%d][%d] : ",i,j);
    for(m=i; m>0; m--)
    {
        for(n=j; n>0; n--)
        {
            printf("\nEnter the element of the matrix Mat[%d][%d] : ",m,n);
            scanf("%d",mat[m][n]);
        }
    }
    printf("The matrix is \n");
    for(; m<i; m++)
    {
        for(; n<j; n++)
        {
            printf("%d : ",mat[m][n]);
        }
    }
    return 0;
}