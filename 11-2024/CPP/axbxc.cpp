// Cho một số K. Hãy tìm xem có bao nhiêu bộ số (A, B, C) mà A*B*C<=K. Các bộ khác chỉ khác nhau về thứ tự số vẫn được chấp nhận.
#include <bits/stdc++.h>
using namespace std;

int k;
long long ans;

int main()
{
        ios_base::sync_with_stdio(0);
        cin >> k;
        for (int i = 1; i <= k; ++i)
                for (int j = 1; j <= k / i; ++j)
                        ans += k / (i * j);
        cout << ans;
}