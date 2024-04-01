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
        string a, b;
        cin >> a >> b;
        int len_a = a.length();
        int len_b = b.length();
        if (a[len_a - 1] == b[len_b - 1])
        {
            if (len_a == len_b)
                cout << '=' << '\n';
            else if (len_a > len_b && a[len_a - 1] == 'S')
                cout << '<' << '\n';
            else if (len_a < len_b && a[len_a - 1] == 'L')
                cout << '<' << '\n';
            else
                cout << '>' << '\n';
        }
        else if (a[len_a - 1] > b[len_b - 1])
            cout << '<' << '\n';
        else
            cout << '>' << '\n';
    }
    return 0;
}
