tc = int(input())

for i in range(1, tc):
    print('*' * i + ' ' * 2 * (tc-i) + '*' * i)
for i in range(tc, 0, -1):
    print('*' * i + ' ' * 2 * (tc - i) + '*' * i)