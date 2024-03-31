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
        int n, k, q;
        cin >> n >> k >> q;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int l = 0, r = 0;
        long long ans = 0;
        int count = 0;
        while (r < n)
        {
            if (ar[r] <= q)
                count++;
            else
            {
                l = r + 1;
                count = 0;
            }
            if (count == k)
            {
                ans++;
                l = r;
            }
            else if (count > k)
                ans += r - l + 1;
            r++;
        }
        cout << ans << '\n';
    }
    return 0;
}
