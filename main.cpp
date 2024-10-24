#include <SerieNavidad.hpp>
#include <Lienzo.hpp>
#include <Vector.hpp>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    Vector p(0, 5);
    Vector t(100, 100);

    Lienzo lienzo(p, t);
    SerieNavidad serie(10);
    SerieNavidad serie1(10);
    SerieNavidad serie2(10);

   /* serie.Imprimir();
    serie.Encender();
    serie.Imprimir();
    serie.Apagar();
    
    serie.Imprimir();*/
    
    bool estado = true;
    int incremento = 0;
    
    while (true){
        
        //Wiu wiu
        serie.Alternar(estado);
        lienzo.Dibujar(serie);
        estado = estado ? false : true;

        serie2.Apagar();
        serie2.Encender(incremento);
        lienzo.Dibujar(serie2);
        incremento++;
        sleep(1);
        lienzo.Limpiar();

    }

    

    return 0;
}