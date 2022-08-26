#include <bits/stdc++.h>
using namespace std;
 

void Pair(int num[], int n, int target)
{
    //firstly sort the elements
    sort(num, num + n);
 
   
    int low = 0;
    int high = n - 1;
 
    
    while (low < high)
    {
        
        if (num[low] + num[high] == target)
        {
            cout << "Pair found (" << num[low] << ", " << num[high] << ")\n";
            return;
        }
 
        
        (num[low] + num[high] < target)? low++: high--;
    }
 
    
    cout << "Pair not found";
}
 
int main()
{
    int num[] = {8,7,2,5,3,1};
    int target = 10;
 
    int n = sizeof(num)/sizeof(num[0]);
 
    Pair(num, n, target);
 
    return 0;
}