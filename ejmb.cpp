#include <iostream>
#include <cmath>

using namespace std;

class Figura3d {
    private:
    double lado;
    public:
    Figura3d(double);
    virtual double mostrar();
    
};

class Cubo : public Figura3d {
    private:
    double lado;
    public:
    Cubo(double);
    double mostrar();
};

//Figura3d :: Figura3d() : lado(0.0) {}
Figura3d :: Figura3d(double _lado) {
    lado = _lado;
}

double Figura3d :: mostrar(){
    return lado;
}

Cubo :: Cubo(double clado) : Figura3d(clado) {
    lado = clado;
}

double Cubo :: mostrar(){
    return (lado*lado*lado);
}

int main(){
    Figura3d* volumenes[3];

    volumenes[0] = new Cubo(4.00000000);

    double volumenc = volumenes[0] -> mostrar();

    cout << "volumen: "<< volumenes[0] ->mostrar() <<endl;

    return 0;
}