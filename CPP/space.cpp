// Đếm khoảng trắng trong chuỗi
#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
        ios_base::sync_with_stdio(0);
        int testcases;
        cin >> testcases;
        cin.ignore();

        while (testcases--)
        {
                getline(cin, s);
                int ans = 0;
                for (int i = 0; i < s.size(); ++i)
                        if (s[i] == ' ' && (i == 0 || s[i - 1] != ' '))
                                ++ans;
                cout << ans << '\n';
        }
}