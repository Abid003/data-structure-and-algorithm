#include<stdio.h>
   int main()
{
    int a[10] , i, low, high, mid,  n ,num, found;
    //input
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter a number to search\n");
     scanf("%d",&num);
     low = 0;
     high = n-1;


        while(low<=high)
        {
            mid = (low+high)/2;
            if(num == a[mid])
            {
                found = 1;
                break;
            }
            else if(num>a[mid])
            {
                low = low+1;
            }
            else
            {
                high = high-1;
            }
        }


     if(found== 1)
     {
         printf("search successful");
     }
     else printf("search unsuccessful");
}
