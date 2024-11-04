// Giải và biện luận hệ phương trình bậc nhất hai ẩn trên tập số thực
#include <bits/stdc++.h>
using namespace std;

long long a, b, c, d, e, f;

int main()
{
        ios_base::sync_with_stdio(0);

        cin >> a >> b >> c >> d >> e >> f;
        long long gd = 1ll * b * e / __gcd(b, e);
        a *= gd / b, c *= gd / b;
        d *= gd / e, f *= gd / e;

        if (a - d == 0)
        {
                if (c - f == 0)
                        cout << "VOSONGHIEM";
                else cout << "VONGHIEM";
        }
        else
        {
                double x = double(c - f) / double(a - d);
                double y = double(c - a * x) / double(gd);
                cout << setprecision(2) << fixed << x << ' ' << y;
        }
}