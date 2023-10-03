genap = True
n = int(input())
ganjil = [0] * (n + 1)

o = 0
for i in range(1, n + 1, 1):
    genap = not genap
    if genap == False:
        ganjil[i] = i
        o = o + ganjil[i]
if genap == True:
    print("Genap")
else:
    print("Ganjil")
print("Hasil dari jumlahan ganjil yang kurang dari ", end='', flush=True)
print(n, end='', flush=True)
print(" adalah ", end='', flush=True)
print(o)
