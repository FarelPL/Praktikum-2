import sys

data = []
while len(data) < 2:
    data.extend(sys.stdin.readline().split())

r = float(data[0])
t = float(data[1])

phi = 3.142857

volume = phi * (r ** 2) * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")