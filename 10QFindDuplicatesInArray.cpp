#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int ans = 0;

    // XOR all array element
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

// XOR [1 to n-1]
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate number is : " << ans;
    return ans;
}
int main()
{
    int arr[6] = { 1,2,3,4,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, n);

    return 0;
}