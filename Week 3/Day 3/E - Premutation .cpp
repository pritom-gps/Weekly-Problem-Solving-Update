#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int mat[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int, int> mp;
        pair<int, int> p;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mp[mat[i][n - 2]]++;
            if (mp[mat[i][n - 2]] > mx)
            {
                mx = mp[mat[i][n - 2]];
                p = {mat[i][n - 2], mp[mat[i][n - 2]]};
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mat[i][n - 2] != p.first)
            {
                for (int j = 0; j < n - 1; j++)
                    cout << mat[i][j] << " ";
                cout << p.first << endl;
                break;
            }
        }
    }
    return 0;
}
