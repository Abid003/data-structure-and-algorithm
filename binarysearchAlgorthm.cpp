#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1,2,3,4};

    int low = 0;
    int high = 4;
    int val = 4;
    int notFound = 1;

    while (low<= high)
    {
       int mid = (low+high)/2;

        if(a[mid] == val)
        {
            cout<<"valoue found at index  "<<mid;
            notFound = 0;
            break;
        }
        else if(a[mid] > val)
        {
            high = mid+1;
        }
        else
            low = mid+1;

    }

        if(notFound==1)
            cout<<"not found";


}
