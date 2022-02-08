import sys

numDay = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']

x, y = map(int, sys.stdin.readline().split())

for i in range(x-1):
    y += numDay[i]

day = y % 7

print(week[day])
