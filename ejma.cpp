#include <iostream>

using namespace std;

struct Persona {
    char nombre[30];
    int edad;
};

void ingresarDatos(Persona* personas, int n){
    cout<< "......";
    for(int i=0; i<n; i++){
        cout<< "ingresa nombre:";
        cin.ignore();
        cin.getline(personas[i].nombre,30);
        
        cout<< "ingrese edad: "; 
        cin>> personas[i].edad;
    }
}
void mostrarDatos(Persona* personas, int n){
    for(int i=0; i<n; i++){
        cout<< "nombre "<< i + 1 << ": "<<personas[i].nombre;
        cout<< "edad "<< i + 1 << ": "<<personas[i].edad;
    }
}

int main(){
    cout<< "----------";
    int n;
    cout<< "cantidad de personas: ";cin>>n;
    
    Persona* personas = new Persona[n];

    ingresarDatos(personas,n);
    mostrarDatos(personas,n);

    delete personas;

    return 0;
}