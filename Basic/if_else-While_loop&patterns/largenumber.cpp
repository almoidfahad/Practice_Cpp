#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter First Number A:" << endl;
    cin >> a;

    cout << "Enter Second Number B:" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "A is Larger then B: " << a;
    }
    else if (a < b)
    {
        cout << "B is Larger then A: " << b;
    }
    else
    {
        cout << "A $ B Both are Equal";
    }
}