/** Improvements to  be made
 * 1) Repeated max number in the given input */

#include <iostream>
using namespace std;

int max_pair_product(int n, int ar[])
{
    int max1 = -1 , max2 = -1;
    
    for(int i=0; i<n; i++)
    {
      if(ar[i] > max1) 
        max1 = ar[i];   // Finding max1
    }

    for(int j=0; j<n; j++)
    {
        if((ar[j] != max1) && (ar[j] > max2))
        max2 = ar[j];    // Finding max2
    }

    if(max1 == -1)
        return -1 ;
    else        
        return ( max1 * max2 ) ;
}

int main()
{
    int n, ar[50];
    cin >> n; //Count of numbers in the array

    for (int i=0; i<n; i++)
    {
        cin >> ar[i]; // Entering the values
    }

    if(max_pair_product(n , ar) != -1)
        cout << "The maximum pairwise product is " << max_pair_product(n , ar) << "\n";
    else cout << "Invalid Inputs" <<"\n";

    return 0;
}