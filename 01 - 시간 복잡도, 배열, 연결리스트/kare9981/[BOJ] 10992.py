tc = int(input())

for i in range(1, tc+1):
    if i == 1:
        print(' ' * (tc - i) + '*')
    elif i == tc:
        print('*' * (i * 2 - 1))
    else:
        print(' ' * (tc - i) + '*' + ' ' * (i * 2 - 3) + '*')