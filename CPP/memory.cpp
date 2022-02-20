#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Memory: public Hardware{

    private:
        int frequency;
        string memorySize;
        bool isSupportsCuda;

    public:
        Memory(){
        }

        void setFrequency(int frequency){
            this->frequency = frequency;
        }
        int getFrequency(){
            return this->frequency;
        }

        void setMemorySize(string memorySize){
            this->memorySize = memorySize;
        }
        string getMemorySize(){
            return this->memorySize;
        }

        void setIsSupportsCuda(bool isSupportsCuda){
            this->isSupportsCuda = isSupportsCuda;
        }   

        bool getIsSupportsCuda(){
            return this->isSupportsCuda;
        }

        ~Memory(){
        }
};
