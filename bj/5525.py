import sys
n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())
s = sys.stdin.readline().strip()

start = 0
mid = start + 1
end = mid + 1

records = list()
count = 0

while end < m:
    if s[start] == 'I' and s[mid] == 'O' and s[end] == 'I':
        count += 1
        start += 2 
        mid += 2 
        end += 2
    else:
        if count > 0:
            records.append(count)
            count = 0
        start += 1 
        mid += 1 
        end += 1

records.append(count)

sum = 0
for item in records:
    if item > 0 and item >= n:
        sum += item + 1 - n
print(sum)
