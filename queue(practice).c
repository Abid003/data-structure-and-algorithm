#include<stdio.h>
 #define mxSize 5


 int queue[mxSize];
 int rear = -1, font = -1;

 void queue_insert(int item)
{
        if((font == 0&& rear  == mxSize -1) || (font == rear+ 1))
        {
            printf("queue is full, overflow");
        }
        if(font ==-1){
            font = 0;
            rear = 0;
        }
        else{
            if(rear == maxSize -1){
                rear = 0;
            }
            else
                rear = rear +1;
        }
        queue[rear] = item;

}

void display(){

}

int main()
{
    queue_insert(5);
    queue_insert(55);
    queue_insert(10);
    queue_insert(11);
    queue_insert(91);
    queue_insert(7);

    display();


    queue_delete();

    display();

}
