#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i,j,k,flag;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    }
    printf("Enter Sum:");
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                printf("Indices are found at %d\t%d\n",i+1,j+1); flag=0;
            }
        }
    }
    if(flag!=0)
       printf("No indices found");
}
