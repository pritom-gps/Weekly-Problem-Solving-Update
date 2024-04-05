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
        vector<int> v(n);
        int Xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            Xor ^= v[i];
        }
        int ans = Xor;
        for (int i = 0; i < n; i++)
            ans = min(ans, (Xor ^ v[i]));
        cout << ans << '\n';
    }
    return 0;
}
