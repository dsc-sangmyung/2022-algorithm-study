tc = int(input())

for i in range(tc):
    print((tc - 1 - i) * ' ' + (i + 1) * '*')
for i in range(tc - 1):
    print((i + 1) * ' ' + (tc - 1 - i) * '*')