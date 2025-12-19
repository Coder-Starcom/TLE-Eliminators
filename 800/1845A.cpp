#include <iostream>
using namespace std;

int main()
{
    int t, n, k, x;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n >> k >> x;

        if (x == 1)
        {
            if (n % 2 == 0)
            {
                cout << n / 2;
            }
            else
            {
                cout << n / 2 - 1;
            }
        }
        else
        {
            cout << n;
        }
    }
}