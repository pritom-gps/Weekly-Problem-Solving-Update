#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    int mx = max(x, y);
    int op1 = (2 * mx) - 1;
    int op2 = x + y;
    (op1 >= op2) ? cout << op1 << '\n': cout << op2 << '\n';

    return 0;
}
