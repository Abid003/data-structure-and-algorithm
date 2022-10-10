#include<bits/stdc++.h>
using namespace std;

class Tree
{
public:

    int data;
    struct Tree* left;
    struct Tree* right;


 Tree *createTree()
    {
        class Tree  *p;
        int x;
        printf("enter data -1 for no node");
        scanf("%d",&x);

        if(x == -1)
            return NULL;

        p = (class Tree*)malloc(sizeof(class Tree));
        p->data = x;
        printf("Enter left child %d: \n ",x);
        p->left = createTree();


        printf("Enter Right child %d: \n ",x);
        p->right = createTree();

        return p;
    }

    void preorder(class Tree *t)
{
  if(t!=NULL)
  {
    printf("  %d",t->data);
    preorder(t->left);
    preorder(t->right);
  }

}

};

int main()
{

    class Tree *root;

    Tree ob;

    root = ob.createTree();
   ob.preorder(root);

}


