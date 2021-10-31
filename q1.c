#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i,j;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                printf("Not distinct elements");
                exit(0);
            }
        }
    }
    printf("Distinct elements");
}
