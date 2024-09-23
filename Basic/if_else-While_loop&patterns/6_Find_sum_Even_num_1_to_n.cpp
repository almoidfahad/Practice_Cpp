#include <iostream>
using namespace std;

int main()
{
    int n, sum, i;
    cout << "Enter any Number:";
    cin >> n;

    sum = 0;
    i = 2;
    while (i <= n)
    {
        sum = sum + i;
        // Print Find even Number sum:
        cout << sum << endl;
        i = i + 2;
    }
}