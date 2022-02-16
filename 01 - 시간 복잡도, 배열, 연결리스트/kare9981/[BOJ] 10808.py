a = input()
result = [0] * 26

for i in a:
    result[ord(i)-97] += 1

for i in range(len(result)):
    print(result[i], end=' ')