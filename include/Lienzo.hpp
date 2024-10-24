#pragma once
#include <Vector.hpp>
#include <SerieNavidad.hpp>



class Lienzo
{
    
private:
    //Lienzo tiene 2 Vector
    Vector posicion;
    Vector tamanio; 

public:
    Lienzo(Vector p, Vector t) {
        this -> posicion = p;
        this -> tamanio = t;

    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){ //Lienzo usa la serie de navidad
        serie.Imprimir();
    }

    void Limpiar(){
        system("clear");
    }


};