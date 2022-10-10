 // insertion short

 #include<stdio.h>
insertion_short(int a[], int len)
{
   int i, j,key;
      for(i  = 1; i<len ; i++)
        {
            key =  a[i];
            j = i-1;

            while (j>= 0 && a[j]>key)
            {
                a[j+1] = a[j];
                j = j-1;
            }

            a[j+1] = key;

        }

         for(i  = 0; i<len ; i++)
         {
             printf("%d  ",a[i]);
         }
}


int main()
{
    int a[] = {5,1,2,4,3};

    int len = sizeof(a)/sizeof(a[0]);

    insertion_short(a,len);

}
