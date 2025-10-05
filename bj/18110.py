import sys, math

def normal_round(num):
    if num < math.floor(num) + 0.5:
        return math.floor(num)
    else:
        return math.ceil(num)


n = int(sys.stdin.readline().strip())
reviews = list()
if n == 0:
    print(0)
else:
    for i in range(n):
        reviews.append(int(sys.stdin.readline().strip()))
    reviews.sort()
    exclude = normal_round(0.15*n)
    avg = sum(reviews[exclude:n-exclude])/len(reviews[exclude:n-exclude])
    print(normal_round(avg))
