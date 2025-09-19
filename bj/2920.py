import sys
notes = list(sys.stdin.readline().strip().split())
notes = [int(_) for _ in notes]

direction = -1
for i in range(len(notes)-1):
    if i == 0:
        if notes[i] < notes[i+1]:
            direction = 1
    else:
        if (notes[i+1] - notes[i])*direction < 0:
            direction = 0
            break

if direction == 1:
    print("ascending")
elif direction == -1:
    print("descending")
else:
    print("mixed")