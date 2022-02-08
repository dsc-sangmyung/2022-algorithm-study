import sys

n = int(sys.stdin.readline())
tc = list(sys.stdin.readline())
total = 0

for i in range(n):
    total += int(tc[i])
print(total)