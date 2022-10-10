#include <stdio.h>
#include <stdlib.h>

struct linkedList{

       char info;
        struct linkedList *next;
};
typedef struct linkedList node;



void createlist(node *ptr)
{
    scanf("%c",&ptr->info);

    if(ptr->info =='z')
    {
        ptr->next= 0;
    }

    else {
        node *newnode;
        newnode= (node*)malloc(sizeof(node));
        createlist(newnode);
    }

}


void display(node *ptr)
{
        printf("%c      ",ptr->info);
        display(ptr->next);
}



int main()
{
    node *start;

    start = (node*)malloc(sizeof(node));
    createlist(start);
    display(start);

}
