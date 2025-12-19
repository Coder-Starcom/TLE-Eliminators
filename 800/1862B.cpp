#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> V;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> b;
        vector<int> a;

        int x;
        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            b.push_back(x);
        }

        a.push_back(b[0]);
        for (int j = 1; j < n; ++j)
        {
            if (b[j] < b[j - 1])
            {
                a.push_back(b[j]);
                a.push_back(b[j]);
            }
            else
            {
                a.push_back(b[j]);
            }
        }
        V.push_back(a);
    }

    for (auto i : V)
    {
        cout << i.size() << endl;
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}