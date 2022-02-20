from pyexpat import model
from typing import Sized
from product import Product
from hardware import Hardware
from memory import Memory

Satu = Memory()
Satu.setBrand("NVIDIA")
Satu.setModel("RTX 3060")
Satu.setIdProduct("3060NV")
Satu.setPrice(15450000)
Satu.setFrequency(1815)
Satu.setMemorySize("12 GB")
Satu.setIsSupportCuda(True)

n = int(input("Input Jumlah Produk: "))
Produk = [Memory() for i in range(n)]

i = 0
for i in range (n):
    Brand = input("Input Nama Brand: ")
    Model = input("Input Model: ")
    IDBarang = input("Input ID: ")
    Harga = int(input("Input Harga: "))
    Frekuensi = int(input("Input Frekuensi: "))
    SizeMemori = input("Input Size Memori: ")
    Dukungan = input("Apakah Support CUDA? ")
    if Dukungan == ("True"):
        SupportCuda = True
    else:
        SupportCuda = False

    Produk[i].setBrand(Brand)
    Produk[i].setModel(Model)
    Produk[i].setIdProduct(IDBarang)
    Produk[i].setPrice(Harga)
    Produk[i].setFrequency(Frekuensi)
    Produk[i].setMemorySize(SizeMemori)
    Produk[i].setIsSupportCuda(SupportCuda)
    print("\n")

print("OUTPUT\n===== 1 =====")
Satu.outs()

i = 0
for i in range (n):
    print("\n===== %d =====" % (i + 2))
    Produk[i].outs()




