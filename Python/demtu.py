# Cho một đoạn văn bản là một xâu ký tự chỉ gồm các chữ cái trong bảng chữ cái la-tinh (‘A’…’Z’, ‘a’…’z’) và các dấu cách (‘ ‘).
# Mỗi từ là một dãy chữ cái liên tiếp không chứa dấu cách. Hai từ được phân cách bởi một hoặc nhiều dấu cách.
# Hãy đếm xem đoạn văn đó có bao nhiêu từ.

a = [x for x in input().split()]
print(len(a))