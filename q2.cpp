//NAME : Prabhneet Kaur Sohan Pal
//Roll Number - 2010991657
//SET - 4 
//QUESTION 2

#include <bits/stdc++.h>
using namespace std;

// Function to Check if array
// elements are consecutive
bool areConsecutive(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    // checking the adjacent elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

/* Driver program to test above functions */
int main()
{
   int n ;
      
    cout<<"Please enter the value of n : ";
    cin>>n;//"n" is the array size//
    cout<<"Value of n is : "<<n<<"\n";

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];//this for loop is to take the input from the user//
    }
    for(int i  = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<endl;//this loop is to print the array elements//
    }
    bool res;

    try
    {
        res = areConsecutive(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (res == true)
        cout << " Array elements are consecutive ";
    else
        cout << " Array elements are not consecutive ";
    return 0;
}
