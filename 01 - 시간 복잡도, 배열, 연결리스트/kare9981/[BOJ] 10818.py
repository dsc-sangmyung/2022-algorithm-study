import sys

tc = int(sys.stdin.readline())
num = list(map(int, sys.stdin.readline().split()))

max = num[0]
min = num[0]

for i in num[1:]:
    if i > max:
        max = i
    elif i < min:
        min = i

print(min, max)