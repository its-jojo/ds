#include<stdio.h>
#include<stdlib.h>

void create();
void traverse();
void delete_beg();

int i,n;

struct node{
    int data;
    struct node *next;
};

struct node *newnode, *temp, *head;

int main()
{
    create();
    traverse();
    delete_beg();
    traverse();

    return 0;
}

void create()
{
    head = NULL;
    printf("enter how many nodes you want to insert:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node*));
        printf("enter data:");
        scanf("%d\n", &newnode->data);
        newnode->next=NULL;

        if (head == NULL) 
        {
            head =newnode;
            temp = newnode;
        }

        else{
            temp->next = newnode;
            temp=newnode;
        }
    }

}

void traverse()
{
    temp = head;
    while(temp->next=NULL)
    {
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

void delete_beg()
{
    temp=head;
    head = head->next;
    free(temp);
}
