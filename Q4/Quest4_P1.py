import sys

num_lines = [int(line) for line in sys.stdin.read().split()]

curr = 2025
prev = num_lines[0];

for num in num_lines:
    curr = curr * (prev / num)
    prev = num
print (int (curr))
