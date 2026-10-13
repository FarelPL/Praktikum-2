import sys
import math

data = []
while len(data) < 2:
    data.extend(sys.stdin.readline().split())

A = int(data[0])
B = int(data[1])

alas = math.sqrt((B ** 2) - (A ** 2))
keliling = alas + A + B
luas = 0.5 * alas * A

print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(A)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")