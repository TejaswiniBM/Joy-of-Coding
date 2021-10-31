#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a[10][10],r,c,i,j;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix elements:");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;++j)
        {
            printf("%d\t",a[i][j]);
        }
        if(j=c-1)
            printf("\n");
    }
    printf("Transpose matrix :");
    for(j=c-1;j>=0;j--)
    {
        for(i=0;i<r;i++)
        {
            printf("%d\t",a[i][j]);
        }
        if(i=r-1)
            printf("\n");
    }
}
