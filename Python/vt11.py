# Sắp xếp mảng các số nguyên A có n phần tử tăng dần nhưng giữ nguyên vị trí phần tử đầu tiên và phần tử cuối cùng của mảng
n = int(input())
a = [int(i) for i in input().split()]

print(a[0], end = ' ')
for i in sorted(a[1:-1]):
        print(i, end = ' ')
print(a[-1])
