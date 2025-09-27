import sys
isbn = str(sys.stdin.readline().strip())
weight = [1,3,1,3,1,3,1,3,1,3,1,3,1]
checksum = 0
masked = 0
for i in range(len(isbn)):
    if isbn[i] != '*':
        checksum += int(isbn[i])*weight[i]
    else:
        masked = i

for j in range(10):
    if (weight[masked]*j + checksum)%10 == 0:
        print(j)
        break