/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int num;
    struct node *next;
};
void insertAtBegining(struct node **,int );
void display(struct node * );

int main() {
    int n,data,i;
    struct node *head;
    head=NULL;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
         scanf("%d",&data);
         insertAtBegining(&head,data);
       }
       display(head);
       return 0;
}


void insertAtBegining( struct node **head, int data )
{
	struct node *nnn;
	nnn=(struct node*)malloc(sizeof(struct node));
	nnn->num=data;
	if((*head)==NULL)
	{
	    (*head)=nnn;
	    nnn->next=NULL;
	}
	else
	{
	    nnn->next=(*head);
	    (*head)=nnn;
	}
}

void display ( struct node *head )
{
    struct node *ptr;
    printf("The elements in the linked list are ");
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        printf("%d->",ptr->num);
    }
    printf("NULL");
}
