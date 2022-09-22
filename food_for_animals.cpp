#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    int a, b, c, x, y;
    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b >> c >> x >> y;
        cout << food(a, b, c, x, y) << endl;
    }
    return 0;
}