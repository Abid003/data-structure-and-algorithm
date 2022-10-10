#include <bits/stdc++.h>
using namespace std;

int a[10];
int temp[10];

void marge_short(int low, int high)
{
 // divide

    int mid, i, j, k;

    if(low == high)
        return ;

    mid = (low+high)/2;

    marge_short(low, mid);
    marge_short(mid+1, high);

    //conquer

    i = low;
    j= mid+1;

    for( k = low; k<=high; k++)
    {
        if(i == mid+1)
        {
            temp[k] = a[j];
            j++;
        }
        else if(j == high +1)
        {
            temp[k] = a[i];
            i++;
        }
        else if(a[i]< a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;

        }

    }

    // combine

    for(k = low; k<=high; k++)
    {
        a[k] = temp[k];
    }

    for(k = low; k<= high; k++)
    {
        cout<< a[k]<< "  ";
    }

}

int main()
{
    marge_short(1,10);
}
