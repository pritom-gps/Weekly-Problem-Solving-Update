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
        string s2;
        cin >> n >> s2;
        if (n != 5)
            cout << "NO" << '\n';
        else
        {
            string s1 = "Timur";
            map<char, int> p;
            map<char, int> q;
            for (int i = 0; i < s1.length(); i++)
                p[s1[i]]++;
            for (int i = 0; i < n; i++)
                q[s2[i]]++;
            bool ans = true;
            for (int i = 0; i < s1.length(); i++)
            {
                if (p[s1[i]] != q[s1[i]])
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}
