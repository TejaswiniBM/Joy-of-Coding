#include <stdio.h>
#include<stdlib.h>
void delete(int a[],int pos,int *n)
{
           int i;
            for(i=pos;i<*n;i++)
                        a[i]=a[i+1];
        *n=*n-1;
}
int main()
{
    int a[10],n,i,j;
    printf("Enter number of ballons:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter ballon number:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
{
         for(j=i+1;j<n;j++)
       {
                   if(a[i]==a[j])
                          delete(a,j,&n);
           }
     }
    printf("Ballon number that are in box are:");
     for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    printf("\n"); 
}
