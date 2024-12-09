// Đổi hệ thập phân sang nhị phân
#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(0);

        int testcases;
        cin >> testcases;
        while (testcases--)
        {
                long long n;
                string s = "";
                cin >> n;
                while (n > 0)
                {
                        s += char(n % 2 + '0');
                        n /= 2;
                }
                reverse(s.begin(), s.end());
                cout << s << '\n';
        }
}