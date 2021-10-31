#include <stdio.h>
#include <stdlib.h>
#define ssize 5
struct book
{
	int Book_id;
	char Book_name[30];
	char Book_author[30];
	float Book_price;
};
typedef struct book *BOOK;

BOOK get()
{
	BOOK p;
	p=(BOOK)malloc(sizeof(struct book));
	return p;
}

void push(int *top,BOOK s[])
{
	BOOK item=get();
	if(*top==ssize-1)
	{
		printf("Box if full.Book cannot be added.\n");
		return;
	}
	printf("Enter details of the book:\n");
	printf("Book id:");
	scanf("%d",&item->Book_id);
	printf("Book name:");
	scanf("%s",item->Book_name);
	printf("Book author:");
	scanf("%s",item->Book_author);
	printf("Book price:");
	scanf("%f",&item->Book_price);
	*top=*top+1;
	s[*top]=item;
}

void pop(int *top,BOOK s[])
{
	BOOK item;
	if(*top==-1)
	{
		printf("Box is empty.No books to remove.\n");
		return ;
	}
	printf("Book with ID %d is deleted\n",item->Book_id);
	item=s[*top];
	*top=*top-1;
	return;
}

void display(int top,BOOK s[])
{
	int i;
	if(top==-1)
	{
		printf("There are no books to display\n");
		return;
	}
	printf("Books in the box:\n");
	printf("Book id\tBook name\tAuthor\tPrice\n");
	for(i=0;i<=top;i++)
	{
	printf("%d\t%s\t%s\t%f\n",s[i]->Book_id,s[i]->Book_name,s[i]->Book_author,s[i]->Book_price);
	}
}

int main()
{
	int top=-1,ch;
	BOOK s[ssize];
	while(1)
	{
	    printf("\n********MENU********\n");
	    printf("1.Add \t2.Delete \t3.Display \t4.Exit\n");
	    printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(&top,s);break;
			case 2:pop(&top,s);break;
			case 3:display(top,s);break;
			case 4:exit(0);
			default:printf("Enter a valid number\n");
		}
	}
}
