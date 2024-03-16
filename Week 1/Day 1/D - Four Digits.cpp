#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < 4 - n; i++)
        s.insert(s.begin() + 0, '0');
    cout << s << endl;

    return 0;
}
