#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
