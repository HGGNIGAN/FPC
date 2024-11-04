# Giải và biện luận hệ phương trình bậc nhất hai ẩn trên tập số thực
import math

a, b, c, d, e, f = [int(x) for x in input().split()]

gd = math.lcm(b, e)
a *= gd / b
c *= gd / b
d *= gd / e
f *= gd / e

if a - d == 0:
        if c - f == 0:
                print("VOSONGHIEM")
        else:
                print("VONGHIEM")
else:
        x = (c - f) / (a - d)
        y = (c - a * x) / gd
        print(f"{x:.2f} {y:.2f}")
