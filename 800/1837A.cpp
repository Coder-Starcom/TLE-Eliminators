#include <iostream>
using namespace std;

int main()
{
    int t, x, k;
    cin >> t;

    int ans[t][3] = {0};
    for (int i = 0; i < t; ++i)
    {
        cin >> x >> k;
        if (x % k == 0)
        {
            ans[i][0] = 2;
            ans[i][1] = 1;
            ans[i][2] = x - 1;
        }
        else
        {
            ans[i][0] = 1;
            ans[i][1] = x;
        }
    }

    for (auto i : ans)
    {
        if (i[0] == 1)
        {
            cout << i[0] << endl
                 << i[1] << endl;
        }
        else
        {
            cout << i[0] << endl
                 << i[1] << " " << i[2] << endl;
        }
    }
}