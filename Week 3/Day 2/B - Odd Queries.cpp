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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        long long pre_sum[n + 1];
        pre_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i - 1];
            if (i == 1)
                pre_sum[i] = a[i - 1];
            else
                pre_sum[i] = pre_sum[i - 1] + a[i - 1];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long sum = pre_sum[l - 1] + ((r - l + 1) * k) + pre_sum[n] - pre_sum[r];
            (sum % 2 == 0) ? cout << "NO" << '\n' : cout << "YES" << '\n';
        }
    }
    return 0;
}
