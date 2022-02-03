import sys

while True:
    try:
        a, b = map(int, sys.stdin.readline().split())
    except:
        break
    if a > 0 and b < 10:
        print(a+b)
    else:
        break