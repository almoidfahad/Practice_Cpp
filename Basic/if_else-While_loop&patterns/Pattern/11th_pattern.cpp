#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // 3

    char ch_count = 'A';

    int row = 1;
    while (row <= n)
    // 1 <= 3
    {
        int col = 1;
        while (col <= n)
        //       1 <= 3
        //       2 <= 3
        //       3 <= 3
        //       4 <= 3 (False)
        {

            cout << ch_count << " ";
            /*   A B C


            */
            ch_count = ch_count + 1;
            //      B     = A + 1
            //     C      = B + 1
            //     D      = C + 1

            col = col + 1;
            // 2 = 1 + 1
            // 3 = 2 + 1
            // 4  = 3 + 1
        }
        cout << endl;
        row = row + 1;
    }
}

/*Output

n = 5

A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

*/