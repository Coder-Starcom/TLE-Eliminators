#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;

        int A[n];
        bool f = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> A[j];
            if (A[j] == k)
                f = 1;
        }
        if (f)
            ans[i] = "YES";
        else
            ans[i] = "NO";
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}