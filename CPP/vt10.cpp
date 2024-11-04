// Sắp xếp mảng giảm dần
#include <bits/stdc++.h>
using namespace std;

int n, a[int(1e4) + 1];

int main()
{
        ios_base::sync_with_stdio(0);
        cin >> n;
        for (int i = 1; i <= n; ++i)
                cin >> a[i];
        sort(a + 1, a + n + 1, [](int x, int y)
             { return x > y; });
        for (int i = 1; i <= n; ++i)
                cout << a[i] << ' ';
}