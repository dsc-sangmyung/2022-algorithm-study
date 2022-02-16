# N = int(input())
# N_list = list(map(int, input().split()))

# V = int(input())

# print(N_list.count(V))

N = input()

N_list = list(input().split())
V = input()

cnt = 0
for i in N_list:
    if i == V:
        cnt += 1
print(cnt)