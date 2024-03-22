#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin >> n >> val;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != val)
            v.push_back(x);
    }
    for (int ele : v)
        cout << ele << " ";
    cout << endl;

    return 0;
}
