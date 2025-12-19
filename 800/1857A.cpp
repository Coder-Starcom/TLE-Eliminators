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

        int x, c = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            if (x % 2 == 1)
                c++;
        }
        if (c % 2 == 0)
            ans[i] = "YES";
        else
            ans[i] = "NO";
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}