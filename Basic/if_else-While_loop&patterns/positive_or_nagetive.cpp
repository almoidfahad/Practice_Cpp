#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number:" << endl;
    cin >> n;

    if (n > 0)
    {
        cout << "Positive Number";
    }
    else if (n < 0)
    {
        cout << "Negative Number";
    }
    else
    {
        cout << "The Number is 0";
    }
}