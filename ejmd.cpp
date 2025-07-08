#include <iostream>
using namespace std;

int main() {
    int capacidad = 2;  // capacidad inicial
    int filas = 0;
    int** notas = new int*[capacidad];

    while (true) {
        int nota1, nota2;
        cout << "Estudiante " << filas + 1 << ":\n";
        cout << "Ingrese primera nota (o -1 para terminar): ";
        cin >> nota1;

        if (nota1 == -1) break;

        cout << "Ingrese segunda nota: ";
        cin >> nota2;

        //redimensionar si se llena
        if (filas == capacidad) {
            capacidad *= 2;
            int** nuevo = new int*[capacidad];
            for (int i = 0; i < filas; i++)
                nuevo[i] = notas[i];
            delete[] notas;
            notas = nuevo;
        }

        //guardar notas y promedio
        notas[filas] = new int[3]; // 3 columnas: nota1, nota2, promedio
        notas[filas][0] = nota1;
        notas[filas][1] = nota2;
        notas[filas][2] = (nota1 + nota2) / 2;
        filas++;
    }

    // Mostrar resultados
    cout << "\n========= RESULTADOS =========\n";
    for (int i = 0; i < filas; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cout << "Nota 1: " << notas[i][0]
             << ", Nota 2: " << notas[i][1]
             << ", Promedio: " << notas[i][2] << "\n";
    }

    //liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] notas[i];
    }
    delete[] notas;

    return 0;
}
