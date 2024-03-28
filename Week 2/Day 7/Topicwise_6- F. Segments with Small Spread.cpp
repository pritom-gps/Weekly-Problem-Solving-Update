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
    set<ll> st;
    unordered_map<ll, ll> mp;
    while (r < n)
    {
        st.insert(ar[r]);
        mp[ar[r]]++;
        ll diff = *st.rbegin() - *st.begin();
        if (diff > k)
        {
            while (diff > k && l <= r)
            {
                mp[ar[l]]--;
                if (mp[ar[l]] == 0)
                    st.erase(ar[l]);
                l++;
                diff = *st.rbegin() - *st.begin();
            }
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << '\n';
    return 0;
}
