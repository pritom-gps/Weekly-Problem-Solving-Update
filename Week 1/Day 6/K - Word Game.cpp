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
        map<string, int> mp;
        string st[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                st[i][j] = s;
                mp[s]++;
            }
        }
        int p[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[st[i][j]] == 1)
                    p[i] += 3;
                else if (mp[st[i][j]] == 2)
                    p[i] += 1;
            }
        }
        cout << p[0] << " " << p[1] << " " << p[2] << '\n';
    }
    return 0;
}
