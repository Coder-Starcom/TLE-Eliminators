#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];
    for (int i = 0; i < t; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2 != 0)
            if (a < b)
                ans[i] = "Second";
            else
                ans[i] = "First";
        else
        {
            if (a > b)
                ans[i] = "First";
            else
                ans[i] = "Second";
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}