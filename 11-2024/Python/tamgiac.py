# Cho ba số nguyên dương. Kiểm tra xem ba số đó có là ba cạnh của một tam giác không? 
# Nếu không thì ghi ra NO, nếu là ba cạnh của một tam giác thì ghi ra chu vi, diện tích của tam giác đó 
# (diện tích ghi dạng số thập phân với quy cách làm tròn đến hàng phần trăm).
import math

a, b, c = [int(x) for x in input().split()]

if a + b <= c or b + c <= a or a + c <= b:
        print("NO")
else:
        perimeter = a + b + c
        half_perimeter = perimeter / 2
        area = math.sqrt(half_perimeter * (half_perimeter - a) * (half_perimeter - b) * (half_perimeter - c))
        print(f"{perimeter} {area:.2f}")
