#include <iostream>
using namespace std;
int main()
{
    int i, sum, n;
    cout << "Enter Any Number: ";
    cin >> n;

    sum = 0;
    i = 1;
    while (i <= n)
    {

        sum = sum + i;
        cout << sum << endl;
        i = i + 1;
    }
}