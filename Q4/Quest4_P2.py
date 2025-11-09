import sys

num_lines = sys.stdin.read().strip().splitlines()

curr = 100
prev = int(num_lines[0])

for num in num_lines[1:]:
    if "|" in num:
        left, right = map(int, num.split('|'))
        curr = curr * (prev / left)
        prev = right
    else:
        curr = curr * (prev / int(num))
print (int(curr))