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
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > mx)
                mx = mp[x];
        }
        int op = 0;
        while (mx < n)
        {
            op++;
            mx *= 2;
            if (mx > n)
                op += n - mx / 2;
            else
                op += mx / 2;
        }
        cout << op << '\n';
    }
    return 0;
}
