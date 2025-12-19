#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];
    for (int i = 0; i < t; ++i)
    {
        unordered_map<int, int> m;
        int n;
        cin >> n;
        int x;
        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            m[x]++;
        }
        vector<int> v;

        if (m.size() == 1)
        {
            ans[i] = "YES";
        }
        else if (m.size() == 2)
        {
            for (auto i : m)
            {
                v.push_back(i.second);
            }
            if (n % 2 == 0)
            {

                if (v[0] == v[1])
                    ans[i] = "YES";
                else
                    ans[i] = "NO";
            }
            else
            {
                if (abs(v[0] - v[1]) == 1)
                    ans[i] = "YES";
                else
                    ans[i] = "NO";
            }
        }
        else
        {
            ans[i] = "NO";
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}