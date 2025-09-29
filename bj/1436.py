import sys
n = int(sys.stdin.readline().strip())
arr = ['666']
while n > len(arr):
    tarr = []
    for i in range(len(arr)):
        for j in range(10):
            tarr.append(arr[i] + str(j))
            tarr.append(str(j) + arr[i])
    
    tarr.sort()
    k = 0    
    while True:
        if k+1 == len(tarr):
            break
        if tarr[k] == tarr[k+1]:
            del tarr[k+1]
        else:
            k += 1
    arr = tarr

print(int(arr[n-1]))