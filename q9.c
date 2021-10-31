#include<stdio.h>
#include<string.h>
void rotate(char str1[])
{
	int m=strlen(str1);
	char temp=str1[0];
	for(int i=0;i<m-1;i++)
		str1[i]=str1[i+1];
	str1[m-1]=temp;
}
int main()
{
    char str1[30], str2[30];
	printf("Enter String 1:");
	scanf("%[^\n]%*c",str1);
	printf("Enter String 2:");
	scanf("%[^\n]%*c",str2);
	rotate(str1);
	printf("Rotated string of string1:");
	for(int i=0;i<strlen(str1);i++)
	            printf("%c",str1[i]);
	if((strcmp(str1,str2))==0)
	    printf("\nstring2 is the rotated string of string1");
	else
	    printf("\nstring2 is not rotated string of string1");
}
