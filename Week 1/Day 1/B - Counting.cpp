#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    if (a == mx)
        cout << 0 << '\n';
    else
        cout << (b - a) + 1 << '\n';

    return 0;
}
