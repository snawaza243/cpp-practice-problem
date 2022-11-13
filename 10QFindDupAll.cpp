#include <iostream>
using namespace std;

int getAllDup(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }

    cout << ans;
}

int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 1, 2, 3, 6, 7};

    getAllDup(arr, n);
}