#include<stdio.h>
#include<stdlib.h>
struct LinkedList
{
    int info;
    struct LinkedList *next;

};
typedef struct LinkedList node;

void createList(node *ptr)
{
    scanf("%d",&ptr->info);

    if(ptr->info == 0)
    {
       ptr->next =0;
    }
    else {
        node *newnode;
        newnode = (node*)malloc(sizeof(node));
        createList(newnode);
    }

}

void printlist(node *ptr)
{
    while (ptr!= 0)
    {
    printf("%d   ",ptr->info);
    ptr = ptr->next;

    }
}

int main()
{
    node *start;
    start = (node*)malloc(sizeof(node));
    createList(start);
    printlist(start);


}
