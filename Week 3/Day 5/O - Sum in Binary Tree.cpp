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
        long long n;
        cin >> n;
        long long sum = 0;
        while (n >= 1)
        {
            sum += n;
            n = n / 2;
        }
        cout << sum << '\n';
    }
    return 0;
}
