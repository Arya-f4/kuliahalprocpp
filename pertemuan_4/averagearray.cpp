n = int(input())
angka = [0] * (n + 1)

for i in range(0, n + 1, 1):
    angka[i] = i
i = 0
o = 0
for i in range(0, n + 1, 1):
    o = o + angka[i]
r = float(o) / n
print("Jumlah seluruh bilangan tersebut adalah: ", end='', flush=True)
print(o)
print("Rata-rata dari jumlah keseluruhan tersebut adalah :", end='', flush=True)
print(r)
