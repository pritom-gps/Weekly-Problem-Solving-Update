#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int l = 0, r = 0;
    long long sum = 0;
    long long ans = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
            ans += (r - l + 1);
        else
        {
            while (sum > s && l <= r)
            {
                sum -= ar[l];
                l++;
            }
            if (sum <= s)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << '\n';

    return 0;
}
