
#include<stdio.h>
#define stksz 10


int stack[stksz], top = -1;



void push (int item)
{

    if (top ==stksz-1)
    {
        printf("stack overflow");


    }
    else
    {
        top = top+1;
        stack[top]= item;

    }
}

int pop()
{
    if (top == -1)
    {
        printf("stack underflow");

    }

    else
    {
        int item;
        item = stack[top];
        top = top-1;
        return item;


    }
}


void display()
{
    int i;
    printf("stack contain  \n");
    for(i= 0; i<=top; i++)
    {

        printf("%d  ",stack[i]);
    }
}




int main()
{
    int a, n, number,i ;
    printf("enter a number 1 to 3\n");
    scanf( "%d", &a);

    printf( "enter the the number of item");
    scanf("%d",&n);

  if(a == 1)
{
   for(i = 0; i<= n; i++)
    {
    printf("enter a number to push  ");
    scanf("%d",&number );
    push (number);
   }

   display();
}

printf("enter a number again to pop or exit");
scanf("%d",&a);


if(a== 2)
{
    pop();
    display();
}









}
