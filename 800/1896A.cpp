#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int A[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> A[j];
        }

        if (A[0] == 1)
            ans[i] = "YES";
        else
            ans[i] = "NO";
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}