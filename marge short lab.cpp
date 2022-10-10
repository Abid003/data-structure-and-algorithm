#include<bits/stdc++.h>
using namespace std;
int a[100000] , temp[100000];


void marge_short(int low, int high)
{

    int i, j, k, mid;
    //divide

   if(low== high)
    return;

         mid = (low + high) /2;
        marge_short(low, mid);
        marge_short(mid+1, high);


        ///////    conquer

    for(i = low,  j = mid+1,k = low; k<= high; k++)
    {
        if(i == mid+1)
        {
            temp[k] = a[j++];

        }

        else if(j == high+1)
        {
           temp[k] = a[i++];

        }


        else if(a[i]< a[j]){
            temp[ k] = a[i++];

        }

        else{
            temp[k] = a[j++];

        }
    }

    //combine

    for(k = low; k<= high;k++)
    {
        a[k] = temp[k];

    }


}

void  printShortedList(int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}


 void binarySearch(int num,int n){
    int low = 0;
    int high = n;
    int notFound = 1;

    while (low<= high)
    {
       int mid = (low+high)/2;

        if(a[mid] == num)
        {
            cout<<"value found at index  "<<mid;
            notFound = 0;
            break;
        }
        else if(a[mid] < num)
        {
            low = mid+1;
        }
        else
            high = mid -1;
    }
        if(notFound==1)
            cout<<"not found";


 }

int main()
{
    int n;
    cin>>n;



    for(int i = 0; i<n;i++)
    {
        cin>>a[i];

    }


        marge_short(0,n-1);


        printShortedList(n);

        int num;
        cout<<"enter a number to search"<<endl;
        cin>>num;

        binarySearch(num,n);
}
