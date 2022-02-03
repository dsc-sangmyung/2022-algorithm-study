import sys

tc = int(sys.stdin.readline())

for i in range(0, tc):
    a, b = map(int, sys.stdin.readline().split())
    print("Case #%s: %s"%(i+1, a+b))