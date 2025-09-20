import sys
t = int(sys.stdin.readline().strip())
for i in range(t):
    h, w, n = map(int, sys.stdin.readline().strip().split())
    front = f"{(n-1)%h+1}"
    back = f"0{(n-1)//h+1}" if ((n-1)//h+1) < 10 else f"{(n-1)//h+1}"
    print(front+back)
