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
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (n == 1)
            cout << "YES" << '\n';
        else
        {
            int final_length = n - k;
            unordered_map<char, int> mp;
            for (int i = 0; i < s.size(); i++)
                mp[s[i]]++;
            int count = 0;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second >= 2 && it->second % 2 == 0)
                {
                    count += it->second;
                }
                else if (it->second >= 2 && it->second % 2 != 0)
                {
                    count += it->second - 1;
                }
            }
            if (count == final_length - 1)
                cout << "YES" << '\n';
            else if (count >= final_length)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
