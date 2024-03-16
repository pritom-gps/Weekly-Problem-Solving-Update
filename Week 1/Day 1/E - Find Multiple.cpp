#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while (ans + c <= b)
    {
        ans += c;
        if (ans > a)
            break;
    }
    (ans < a) ? cout << -1 << '\n' : cout << ans << '\n';

    return 0;
}
