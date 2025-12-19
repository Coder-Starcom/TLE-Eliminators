#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans[t];

    int score[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    for (int i = 0; i < t; ++i)
    {
        char A[10][10];
        int s = 0;
        for (int j = 0; j < 10; ++j)
            for (int k = 0; k < 10; ++k)
            {
                cin >> A[j][k];
                if (A[j][k] == 'X')
                    s += score[j][k];
            }
        ans[i] = s;
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }
}