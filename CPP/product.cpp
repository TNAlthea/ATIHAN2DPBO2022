#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Product{

    private:
        int price;
        string idProduct;

    public:
        Product(){
        }

        void setPrice(int price){
            this->price = price;
        }
        int getPrice(){
            return this->price;
        }

        void setIdProduct(string idProduct){
            this->idProduct = idProduct;
        }
        string getIdProduct(){
            return this->idProduct;
        }

        ~Product(){
        }
};
