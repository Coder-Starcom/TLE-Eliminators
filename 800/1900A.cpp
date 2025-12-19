#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans[t];
    for (int j = 0; j < t; ++j)
    {
        int n;
        cin >> n;

        char A[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        bool f = 0;
        int cA = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            if (A[i] == '.' && A[i + 1] == '.' && A[i + 2] == '.')
            {
                f = 1;
                break;
            }
        }
        for (auto i : A)
        {
            if (i == '.')
                cA++;
        }
        if (f)
            ans[j] = 2;
        else
            ans[j] = cA;
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}