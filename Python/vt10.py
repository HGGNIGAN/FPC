# Sắp xếp mảng giảm dần
n = int(input())
a = [int(i) for i in input().split()]

for i in sorted(a, reverse = True):
        print(i, end=" ")
