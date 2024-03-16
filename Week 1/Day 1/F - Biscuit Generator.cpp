#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;
    t = t + 0.5;
    int ans = 0;
    int time = 0;
    while (time + a <= t)
    {
        ans += b;
        time += a;
    }
    cout << ans << '\n';
    return 0;
}
