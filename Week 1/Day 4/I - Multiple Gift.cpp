#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;
    cin >> x >> y;
    long long count = 0;
    while (x <= y)
    {
        count++;
        x *= 2;
    }
    cout << count << '\n';
    return 0;
}
