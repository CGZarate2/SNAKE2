#pragma once
#include <iostream>

using namespace std;

class Foco
{
private:
    bool encendido;
    //bool apagado;
public:
    
    Foco() {}
    ~Foco() {}
    void Encender(){
        this -> encendido = true; 
    }
    void Apagar(){
        this -> encendido = false;
    }
    void Imprimir(){
        if (this->encendido)
        {
            cout <<"O";
        }
        else{
            cout <<"*";  
        }
        
        //cout << this -> encendido;

    }
};



