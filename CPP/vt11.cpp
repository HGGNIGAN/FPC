// Sắp xếp mảng các số nguyên A có n phần tử tăng dần nhưng giữ nguyên vị trí phần tử đầu tiên và phần tử cuối cùng của mảng
#include <bits/stdc++.h>
using namespace std;

int n, a[int(1e4) + 1];

int main()
{
        ios_base::sync_with_stdio(0);
        cin >> n;
        for (int i = 1; i <= n; ++i)
                cin >> a[i];
        sort(a + 2, a + n);
        for (int i = 1; i <= n; ++i)
                cout << a[i] << ' ';
}