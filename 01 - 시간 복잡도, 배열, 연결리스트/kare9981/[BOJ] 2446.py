tc = int(input())

for i in range(tc, 1, -1):
    print(' ' * (tc - i) + '*' * ((2 * i)-1))
for i in range(1, tc+1):
    print(' ' * (tc - i) + '*' * ((2 * i)-1))