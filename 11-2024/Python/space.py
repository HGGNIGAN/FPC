# Đếm khoảng trắng trong chuỗi
testcases = int(input())

while testcases > 0:
        testcases -= 1
        x = input()
        y = x.split()
        print(len(y) - 1 + int(x[0] == ' ') + int(x[-1] == ' '))
