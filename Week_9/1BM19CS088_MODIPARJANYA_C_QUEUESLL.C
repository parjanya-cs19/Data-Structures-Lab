#include <stdio.h>
#include <stdlib.h>
#include <process.h>
struct node
{
    int info;
    struct node *link;
};

typedef struct node *NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("Memory is full\n");
        exit(0);
    }
    return x;
}

void freenode(NODE x)
{
    free(x);
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("List is empty, Cannot Delete item\n");
        return first;
    }
    temp=first;
    temp=temp->link;
    printf("Item Deleted at the front-end is: %d\n",first->info);
    free(first);
    return temp;
}

NODE insert_rear(NODE first ,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    cur=first;
    while(cur->link!=NULL)
        cur=cur->link;
    cur->link=temp;
    return first;        
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
        printf("List is EMPTY , Cannot Display Items\n");
    printf("\n***************************************************************\n");    
    for(temp=first;temp!=NULL;temp=temp->link)
    {
        printf("%d\n",temp->info);
    }    
    printf("\n***************************************************************\n");    

}

void main()
{
    int item,choice,pos;
    NODE first=NULL;
    for(;;)
    {
        printf("\n1:Insert_rear\n2:Delete_front\n3:display_Queue\n4:Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the item at rear-end: ");
	            scanf("%d",&item);
	            first=insert_rear(first,item);
	            break;
            case 2:first=delete_front(first);
	            break;
            case 3:display(first);
	            break;
            default:exit(0);
	            break;
        }
    }
}
