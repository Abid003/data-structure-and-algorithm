#include<stdio.h>
#include<stdlib.h>

struct Tree{
    int data;

    struct Tree* left;
    struct Tree* right;
};

struct Tree *createTree(){
        struct Tree  *p;
        int x;
        printf("enter data -1 for no node");
        scanf("%d",&x);

        if(x == -1)
            return NULL;

        p = (struct Tree*)malloc(sizeof(struct Tree));
        p->data = x;
        printf("Enter left child %d: \n",x);
        p->left = createTree();


        printf("Enter Right child %d: \n",x);
        p->right = createTree();

        return p;
}

int main()
{
    struct Tree *root;

    root = createTree();

}

