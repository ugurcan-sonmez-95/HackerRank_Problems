### Save the Prisoner! - Solution 

def saveThePrisoner(n, m, s):
    print(((s+m-2) % n) + 1)

for _ in range(int(input())):
    n, m, s = (int(x) for x in input().split())
    saveThePrisoner(n, m, s)