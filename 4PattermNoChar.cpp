#include <iostream>
using namespace std;

int pattern11(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

int pattern12(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

int pattern13(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

int pattern21(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

int pattern22(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << j;
            j += 1;
        }
        i+=1;
    }
    return 0;
}
int pattern31(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i + 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}
int pattern32(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << j + 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}
int pattern41(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = j;
        while (j <= n)
        {
            cout << i + j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

int pattern51(int n){
    int i=1;
    int count=0;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count;
            count++;
            j+=1;
        }
        
        i+=1;
    }
    return 0;
    
}
int main()
{
    int n = 5;
    // cout << "\ni=1, j=1, *" << endl;
    // pattern11(n);
    // cout << "\ni=1, j=1, i" << endl;
    // pattern12(n);
    // cout << "\ni=1, j=1, j" << endl;
    // pattern13(n);
    // cout << "\ni=1, j=i, i" << endl;
    // pattern21(n);
    // cout << "\ni=1, j=i, j" << endl;
    // pattern22(n);
    // cout << "\ni=1, j=1, i+1" << endl;
    // pattern31(n);
    // cout << "\ni=1, j=1, j+1" << endl;
    // pattern32(n);
    // cout << "\ni=1, j=1, i+j" << endl;
    // pattern41(n);

    cout << "\ni=1, j=1, count" << endl;
    pattern11(n);
}