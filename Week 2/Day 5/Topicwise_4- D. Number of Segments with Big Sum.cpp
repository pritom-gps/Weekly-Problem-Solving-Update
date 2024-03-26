#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll s;
    cin >> n >> s;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll l = 0, r = 0;
    ll sum = 0;
    ll ans = 0;
    while (r < n)
    {
        sum += ar[r];
        while (sum >= s && l <= r)
        {
            sum -= ar[l];
            l++;
            ans += n - r;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}
