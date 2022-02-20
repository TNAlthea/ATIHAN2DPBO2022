#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "kelas.cpp"

using namespace std;

//bismillahirrahmanirrahiim
/*
Nama : Sabian Annaya Havid
Program Studi/Kelas : Ilmu Komputer/C2
NIM : 2005021

Saya Sabian Annaya Havid mengerjakan Latihan dalam mata kuliah
Desain Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/

int main(){
    Product proNVIDIA;
    Hardware NVIDIA;
    Memory memNVIDIA;
    
    /*Hardcode*/
    proNVIDIA.setIdProduct("3060NV");
    proNVIDIA.setPrice(12000000);

    NVIDIA.setBrand("NVIDIA");
    NVIDIA.setModel("RTX 3060");
    NVIDIA.setIdProduct("3060NV");
    NVIDIA.setPrice(12000000);

    memNVIDIA.setFrequency(1875);
    memNVIDIA.setMemorySize("12 GB");
    memNVIDIA.setIsSupportsCuda(true);
    memNVIDIA.setBrand("NVIDIA");
    memNVIDIA.setModel("RTX 3060");
    memNVIDIA.setIdProduct("3060NV");
    memNVIDIA.setPrice(12000000);

    /*Input User*/

    /*var input*/
    string brand, model, idProduct, memorySize;
    int price, frequency;
    bool isSupport;

    int n = 0, i = 0;    //var loop
    
    /*user menginput banyak barang yang ingin di-input*/
    cout << "Input banyak barang: "; cin >> n; cout << endl;

    Memory GPU[n];
    /*user input*/
    if (n > 0) cout << "Karena 1 barang telah di-input melalui hardcode, maka dilanjutkan ke barang ke-2" << endl;
    for (i = 0; i < n; i++){

        cout << "Input barang ke-" << i+2 << endl; 
        cout << "Masukkan ID Produk: "; cin >> idProduct;
        cout << "Masukkan Harga Produk: "; cin >> price;
        cout << "Masukkan Nama Brand: "; cin >> brand;
        cout << "Masukkan Nama/Jenis Model: "; cin >> model;
        cout << "Masukkan Frekuensi Produk: "; cin >> frequency;
        cout << "Masukkan Kapasitas Memori Produk: "; cin >> memorySize;
        cout << "Masukkan Kompabilitas CUDA (True/False): "; cin >> isSupport; cout << endl;
        
        /*memasukkan data ke dalam array dengan memanfaatkan metode set pada kelas*/
        GPU[i].setIdProduct(idProduct);
        GPU[i].setPrice(price);
        GPU[i].setBrand(brand);
        GPU[i].setModel(model);
        GPU[i].setFrequency(frequency);
        GPU[i].setMemorySize(memorySize);
        GPU[i].setIsSupportsCuda(isSupport);

    }

    /*OUTPUT*/
    cout << "OUTPUT" << endl << endl;

    cout<< "ID Barang [" << 1 << "]: " << memNVIDIA.getIdProduct() << endl;
    cout<< "Harga [" << 1 << "]: " << memNVIDIA.getPrice() << endl;
    cout<< "Nama Brand [" << 1 << "]: " << memNVIDIA.getBrand() << endl;
    cout<< "Nama/Jenis Model [" << 1 << "]: " << memNVIDIA.getModel() << endl;
    cout<< "Kecepatan Frekuensi [" << 1 << "]: " << memNVIDIA.getFrequency() << endl;
    cout<< "Kapasitas Memory [" << 1 << "]: " << memNVIDIA.getMemorySize() << endl;
    cout<< "Apakah Support CUDA? [" << 1 << "]: " << memNVIDIA.getIsSupportsCuda() << endl << endl;
    for (i = 0; i < n; i++){

        cout<< "ID Barang [" << i+2 << "]: " << GPU[i].getIdProduct() << endl;
        cout<< "Harga [" << i+2 << "]: " << GPU[i].getPrice() << endl;
        cout<< "Nama Brand [" << i+2 << "]: " << GPU[i].getBrand() << endl;
        cout<< "Nama/Jenis Model [" << i+2 << "]: " << GPU[i].getModel() << endl;
        cout<< "Kecepatan Frekuensi [" << i+2 << "]: " << GPU[i].getFrequency() << endl;
        cout<< "Kapasitas Memory [" << i+2 << "]: " << GPU[i].getMemorySize() << endl;
        cout<< "Apakah Support CUDA? [" << i+2 << "]: " << GPU[i].getIsSupportsCuda() << endl << endl;
    }

return 0;
}
