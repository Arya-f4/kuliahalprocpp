print("Masukkan Size Array Yang anda inginkan")
a = int(input())
data = [0] * (a)

print("Masukkan List Angka yang anda masukkan tadi sebanyak ", end='', flush=True)
print(a)
for i in range(0, a - 1 + 1, 1):
    data[i] = int(input())
large = data[0]
n = 1
while n <= i - 1:
    if data[n] > large:
        large = data[n]
    else:
        n = n + 1
print("[", end='', flush=True)
for o in range(0, a - 1 + 1, 1):
    print(data[o], end='', flush=True)
    print(" ", end='', flush=True)
print("]")
print("Nilai Terbesar dari array diatas adalah :", end='', flush=True)
print(large)
