import sys

StringList = list(sys.stdin.readline())
cursor = len(StringList)

for _ in range(int(input())):
    command = list(sys.stdin.readline().split())
    if command[0] == 'P':
        StringList.append(cursor, command[1])
        cursor += 1

    elif command[0] == 'L':
        if cursor > 0:
            cursor -= 1

    elif command[0] == 'D':
        if cursor < len(StringList):
            cursor += 1

    else:
        if cursor > 0:
            StringList.pop(StringList[cursor-1])

print(''.join(StringList))
