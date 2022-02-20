#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Hardware: public Product{

    private:
        string brand;
        string model;

    public:
        Hardware(){
        }

        void setBrand(string brand){
            this->brand = brand;
        }
        string getBrand(){
            return this->brand;
        }

        void setModel(string model){
            this->model = model;
        }
        string getModel(){
            return this->model;
        }

        ~Hardware(){
        }
};
