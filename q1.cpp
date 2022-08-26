//NAME : Prabhneet Kaur Sohan Pal
//Roll Number - 2010991657
//SET -4 
//QUESTION 1 - 
#include<iostream>
#include <unordered_set>
using namespace std;
// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // create an empty set to store array elements
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // return minimum index
    return minIndex;
}


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
    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;


}