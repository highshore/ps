import sys
n = int(sys.stdin.readline().strip())
fruits = list(sys.stdin.readline().strip().split())
if len(fruits) < 3:
    print(len(fruits))
else:
    q = 0
    pair = [fruits[0]]
    count = [1]
    while q < len(fruits)-1:
        q += 1
        if fruits[q] in pair:
            count[-1] += 1
        else:
            if len(pair) == 1:
                pair.append(fruits[q])
                count[-1] += 1
            else:
                count.append(1)
                pair = [fruits[q-1]]
                q -= 1
                while fruits[q-2] == fruits[q-1]:
                  q -= 1

    print(max(count))