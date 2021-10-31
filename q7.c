#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0;
    printf("Enter string:");
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
            printf("%c",str[i]);
    }
}
