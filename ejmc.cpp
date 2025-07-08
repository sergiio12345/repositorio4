#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Guarda n líneas de texto ingresadas por el usuario en un archivo
void crearArchivoTexto(const string& nombreArchivo, int cantidadLineas) {
    ofstream archivo(nombreArchivo, ios::out);

    for (int i = 0; i < cantidadLineas; i++) {
        string linea;
        cout << "Ingrese la línea " << i + 1 << ": ";
        getline(cin, linea);
        archivo << linea << endl;
    }

    archivo.close();
}

// Junta el contenido de dos archivos de texto en un nuevo archivo
void juntarArchivosTexto(const string& archivo1, const string& archivo2, const string& archivoDestino) {
    ifstream a1(archivo1, ios::in);
    ifstream a2(archivo2, ios::in);
    ofstream salida(archivoDestino, ios::out);

    string linea;
    // Copiar archivo 1
    while (getline(a1, linea)) {
        salida << linea << endl;
    }

    // Copiar archivo 2
    while (getline(a2, linea)) {
        salida << linea << endl;
    }

    a1.close();
    a2.close();
    salida.close();
}
void leerArchivo(){
    ifstream archivo("nombreM.txt", ios:: in);
    string linea;
    while(getline(archivo,linea)){
        cout<< linea << endl;
    }
    archivo.close();

}

int main() {
    string archivo1 = "archivo1.txt";
    string archivo2 = "archivo2.txt";
    string archivoMezcla = "nombreM.txt";

    cout << " Creando " << archivo1 << " (5 líneas):\n";
    crearArchivoTexto(archivo1, 5);

    cout << "\n Creando " << archivo2 << " (4 líneas):\n";
    crearArchivoTexto(archivo2, 4);

    juntarArchivosTexto(archivo1, archivo2, archivoMezcla);

    cout << "\nMezcla completada. Revisa el archivo: " << archivoMezcla << endl;

    leerArchivo();

    return 0;
}
