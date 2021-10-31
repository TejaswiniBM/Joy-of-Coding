#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];int freq[50];
    int count=0,i=0,j=0;
    printf("Enter string:");
    scanf("%[^\n]*c",str);
    int n=strlen(str);
    for (i=0; i<n; i++)
    {
        count = 1;
        for (j=i+1; j<n; j++)
        {
         if (str[i]==str[j])
         {
            count++;
             freq[j]=0;
         }
        }
       if (freq[i] != 0)
       {
            freq[i] = count;
       }
    }
    int max_freq=freq[0];
    char max_char;
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0 && str[i]!='0' && str[i]!=' ')
        {
            if(freq[i]>max_freq)
            {
            max_freq=freq[i];
            max_char=str[i];
            }
        }
    }
    printf("%c occurs %d times",max_char,max_freq);
}
