# tc = input()

# ans = [0] * 10
# for i in range(len(tc)):
#     num = int(tc[i])
#     if num == 6 or num == 9:
#         if ans[6] <= ans[9]:
#             ans[6] += 1
#         else:
#             ans[9] += 1
#     else:
#         ans[num] += 1
        
# print(max(ans))

n = input()
arr = [0] * 10

for i in range(len(n)):
    arr[int((n[i]))] += 1
arr[6] = (arr[6] + arr[9] + 1) // 2
arr[9] = arr[6]

print(max(arr))