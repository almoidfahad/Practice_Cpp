#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cout << "Enter any Number: ";
    cin >> n;
    /*
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "Prime Number";
        }
        else
        {
            cout << "Not Prime Number";
        }
    */

    i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime For : " << i << endl;
        }
        else
        {
            cout << "Prime For : " << i << endl;
        }
        i = i + 1;
    }
}