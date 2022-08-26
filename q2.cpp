#include<bits/stdc++.h>
using namespace std;
 
void rearranging(int arr[], int n)
{
    
    for (int i=0; i<n-1; i=i+2)
    {
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
 
    // If length is odd
    if (n & 1)
    {
        for (int i=n-1; i>0; i=i-2)
            if (arr[i] > arr[i-1])
                swap(arr[i], arr[i-1]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearranging(arr, n);
    cout << "After rearrange\n";
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
 
    printf("\n");
    return 0;
}