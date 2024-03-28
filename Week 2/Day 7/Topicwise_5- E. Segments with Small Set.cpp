#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll ar[n];
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    ll l = 0, r = 0, ans = 0;
    map<ll, ll> mp;
    ll count = 0;
    while (r < n)
    {
        mp[ar[r]]++;
        if (mp[ar[r]] == 1)
            count++;
        if (count <= k)
            ans += r - l + 1;
        else
        {
            while (count > k && l <= r)
            {
                mp[ar[l]]--;
                if (mp[ar[l]] == 0)
                    count--;
                l++;
                if (count == k)
                    ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}
