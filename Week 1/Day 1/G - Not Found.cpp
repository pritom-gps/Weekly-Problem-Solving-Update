#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int freq[26] = {0};
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        freq[c - 97]++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (freq[c - 97] == 0)
        {
            cout << c << '\n';
            return 0;
        }
    }
    cout << "None" << '\n';
    
    return 0;
}
