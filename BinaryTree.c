#include<stdio.h>
#include<stdlib.h>


struct BinaryTree{

    int data;
    struct BinaryTree  *left;
    struct BinaryTree *right;
};

typedef struct BinaryTree  Node;




Node* createTree()
{
    Node *p;
    int x;
    printf("Enter data(-1 for no node):");
    scanf("%d",&x);

    if(x==-1)
    return NULL;

    p=(Node*)malloc(sizeof(Node));
    p->data=x;
    printf("Enter left child of %d:\n",x);
    p->left=createTree();

    printf("Enter right child of %d:\n",x);
    p->right=createTree();
    return p;
}

void preorder(Node *t)
{
  if(t!=NULL)
  {
    printf("  %d",t->data);
    preorder(t->left);
    preorder(t->right);
  }

}



void postorder(Node *t)
{
  if(t!=NULL)
  {

    postorder(t->left);
    postorder(t->right);
    printf("  %d",t->data);
  }

}

void inorder(Node *t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    printf("  %d",t->data);
    inorder(t->right);
  }

}




int main()
{
    Node *root;

    root = createTree();
    printf("\nThe preorder traversal of tree is: ");
    preorder(root);
    printf("\ninorder \n");
    inorder(root);
    printf("\npostorder\n");
    postorder(root);
}
