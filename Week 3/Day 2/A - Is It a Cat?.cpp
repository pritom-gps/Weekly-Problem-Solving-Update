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
        int n;
        string s;
        cin >> n >> s;
        list<char> l1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < 97)
                s[i] = s[i] + 32;
            l1.push_back(s[i]);
        }
        l1.unique();
        string s2 = "meow";
        list<char> l2;
        for (int i = 0; i < 4; i++)
            l2.push_back(s2[i]);
        (l1 == l2) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }

    return 0;
}
