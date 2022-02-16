# def BinarySearch(start, end, key):
#     if start > end:
#         return 0
#     mid = (start + end) // 2
    
#     if seq[mid] == key:
#         return 1
#     elif seq[mid] > key:
#         return BinarySearch(start, mid - 1, key)
#     elif seq[mid] < key:
#         return BinarySearch(mid + 1, end, key)


# n = int(input())
# seq = list(map(int, input().split()))
# x = int(input())
# tc = 0

# seq.sort()

# for i in seq:
#     if (i * 2) == x:
#         continue
#     tc += BinarySearch(0, len(seq) - 1, x - i)
    
# print(tc // 2)

# two pointer

n = int(input())
seq = list(map(int, input().split()))
x = int(input())
tc = 0

seq.sort()
i = 0
j = len(seq) - 1

while i != j:
    if seq[i] + seq[j] == x:
        tc += 1
        i += 1
    elif seq[i] + seq[j] > x:
        j -= 1
    else:
        i += 1
print(tc)
        