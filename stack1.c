#include<stdio.h>
#define stksz 10

int stack[stksz],top = -1;

void push(int item){
    if(top == -1){

        printf("stack overflow");
    }
    else{

        top ++;
        stack[top] = item;
    }
}



int pop(){
        if(top == -1){

            printf("stack underflow");
        }
        else{
            int item;
            item = stack[top];
            top = top-1;
            return item;
        }
}



void display(){
    int i;
    printf("stack contains \n");
    for(i = 0; i<=top; i++){
        printf("%d", stack[i]);
    }
}

int main(){
    int n,i;
      for(i = 0; i<=11; i++){
            printf("enter a number to add to stack");

           scanf("%d",&n);
           if(n ==-1)
            break;
           else
            push(n);
    }

display();

}
