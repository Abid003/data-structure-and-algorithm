
#include <bits/stdc++.h>
using namespace std;



int main()
{


    float arr[]= {15.0, 23.7, 19.7, 15.4, 18.3, 23.0, 14.2, 20.8, 13.5, 20.7, 17.4, 18.6, 12.9, 20.3, 13.7, 21.4, 18.3, 29.8, 17.1, 18.9, 10.3, 26.1, 15.7, 14.0, 17.8, 33.8, 23.2, 12.9, 27.1, 16.6};
    float freq[6];
    float relf[6];
    float cf[6];
    float mp[6];
    float f = 0;


    int n =  sizeof(arr)/sizeof(arr[0]);

    cout<<"total student = "<<n<<endl;

    sort(arr, arr + n);

    float minimum = arr[0];
    float maximum = arr[n-1];

    cout<<endl<<minimum<<"  "<<maximum<<endl;
    int classin = (maximum-minimum)/5;

    cout<<"class interval = "<<classin<<endl;

    for (int i = 0; i<6; i++)
    {
        freq[i]=0;
    }

    cout<<"frequency distribution table "<<endl;
    cout<<"Class interval frequency "<<endl;
    for(int i =0; i<(n/classin)-1; i++)
    {
        float firstData = minimum;
        float secondData = minimum+classin;
        for(int j = 0; j<n; j++)
        {
            if(arr[j]>=firstData && arr[j]<secondData)
                f++;
        }
        freq[i] = f;

        printf("%.2f -  %.2f   %.2f   \n", firstData,secondData,freq[i]);

        minimum = secondData;
        f = 0;
    }


}
