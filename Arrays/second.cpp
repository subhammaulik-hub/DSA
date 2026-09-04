#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

// pair<int, int> secondOrder(int arr[], int n){
//     int slargest = secondLargest(arr,n);
//     int ssmallest = secondSmallest(arr,n);
//     return {slargest, ssmallest};
// }
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int secondLargestElement = secondLargest(arr, n);
    int secondSmallestElement = secondSmallest(arr, n);
    cout << "The second largest element in the array is: " << secondLargestElement << endl;
    cout << "The second smallest element in the array is: " << secondSmallestElement << endl;
    return 0;
}