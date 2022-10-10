#include<stdio.h>
#define mxsize 10


int queue[mxsize];
int rear = -1, font = -1;

void queue_insert(int item)
{
    if((font == 0&& rear == mxsize- 1)||(font== rear+1))
    {
        printf("queue is full, overflow");
    }

   if(font==-1)
    {
        font= 0;
        rear= 0;
    }
    else{
        if(rear== mxsize-1)
        {
            rear=0;
        }
        else
        rear= rear+1;
    }
    queue[rear]=item;
}

void queue_delete()
{
    if(font == - 1 )
    {
        printf("queue is empty , underflow");
        return;
    }


   int item = queue[font];

       if(font == rear)
       {
           font = -1;
           rear = - 1;
       }
       else if (font == mxsize-1)
       {
           font = 0;
       }
       else
        font = font +1;

}

void display()
{
    int i, fontpos=  font , rearpos= rear ;
    if(font<rear)
    {
     for( i= font; i<=rear; i++)
    printf("%d  ",queue[i]);
    }

    else
    {
        while(fontpos > rearpos )
        {
                  printf("%d  ",queue[fontpos]);
                  fontpos++;

        }
        while(fontpos < rearpos )
        {
                  printf("%d  ",queue[rearpos]);
                    rearpos++;

        }
    }

}

int main()
{


    queue_insert(5);
    queue_insert(10);



    display();


 queue_delete();
    display();



}
