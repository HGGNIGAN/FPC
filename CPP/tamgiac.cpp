// Cho ba số nguyên dương. Kiểm tra xem ba số đó có là ba cạnh của một tam giác không? 
// Nếu không thì ghi ra NO, nếu là ba cạnh của một tam giác thì ghi ra chu vi, diện tích của tam giác đó 
// (diện tích ghi dạng số thập phân với quy cách làm tròn đến hàng phần trăm).
#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(0);
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b <= c || b + c <= a || a + c <= b)
                cout << "NO";
        else
        {
                int perimeter = a + b + c;
                double area = sqrt(double(1ll * perimeter * (perimeter - 2 * a) * (perimeter - 2 * b) * (perimeter - 2 * c) / 16));
                cout << perimeter << ' ';
                cout << setprecision(2) << fixed << area;
        }
}