### Divisible Sum Pairs - Solution

def divisibleSumPairs(k, arr):
    count = 0
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if (arr[i] + arr[j]) % k == 0:
                count += 1
    print(count)

n, k = map(int, input().split())
arr = tuple(map(int, input().split()[:n]))
divisibleSumPairs(k, arr)