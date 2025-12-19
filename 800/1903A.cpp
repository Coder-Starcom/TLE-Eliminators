#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ANS[t];
    for (int j = 0; j < t; ++j)
    {
        int n, k;
        cin >> n >> k;

        int A[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        if (k > 1)
        {
            ANS[j] = "YES";
            continue;
        }
        else
        {
            bool f = 1;
            for (int i = 0; i < n - 1; ++i)
            {
                if (A[i] > A[i + 1])
                {
                    ANS[j] = "NO";
                    f = 0;
                    break;
                }
            }
            if (f)
                ANS[j] = "YES";
        }
    }

    for (auto i : ANS)
    {
        cout << i << endl;
    }
}