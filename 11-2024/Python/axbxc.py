# Cho một số K. Hãy tìm xem có bao nhiêu bộ số (A, B, C) mà A*B*C<=K. Các bộ khác chỉ khác nhau về thứ tự số vẫn được chấp nhận.
k = int(input())

ans = 0
for i in range(1, k + 1):
        for j in range(1, k // i + 1):
                ans += k // (i * j)

print(ans)
