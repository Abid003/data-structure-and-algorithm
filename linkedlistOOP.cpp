#include <bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
   class List* next;

    void createList(List *ptr)
    {
        cin>>ptr->data;

        if(ptr->data == -1)
            ptr->next = 0;
        else
        {
            List *newnode;

            newnode = (List*)malloc(sizeof(List));
            createList(newnode);

        }
    }

    void display(List *ptr)
    {
        while (ptr!= 0)
        {
            cout<<ptr->data;
            ptr = ptr->next;

        }
    }

};


int main()
{
    List ob;
    List *start;

    start = (List*)malloc(sizeof(List));

    ob.createList(start);
    ob.display(start);

}
