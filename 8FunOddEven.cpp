#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout << "Enter number: ";

    cin >> num;

    isEven(num);
    if (isEven(num))
    {
        cout << "Number is even" << endl;
    }
    else
        cout << "Number is odd" << endl;
}