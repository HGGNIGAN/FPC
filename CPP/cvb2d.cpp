// Đổi hệ nhị phân sang thập phân
#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
        ios_base::sync_with_stdio(0);
        int testcases;
        cin >> testcases;
        while (testcases--)
        {
                cin >> s;
                unsigned long long ans = 0;
                for (int i = 0; i < s.size(); ++i)
                        ans = ans * 2 + s[i] - '0';
                
                cout << ans << '\n';
        }
}
