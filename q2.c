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
    int visited=-1, freq[n];
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }
    printf("Element\tFrequency\n");
    for(int i=0;i<n;i++)
    {
       if(freq[i]!=visited) 
        printf("%d\t%d\n",a[i],freq[i]);
    }
}
