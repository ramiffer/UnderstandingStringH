#include <iostream>
using namespace std;

#include "funciones.h"

int main() {

    //Test strcmp=============================
    char c1[15], c2[15];

    cout << "Cadena1";
    cin >> c1;

    cout << "Cadena2";
    cin >> c2;

    int valor = strcmp(c1,c2);
    cout << "Resultado: " <<  valor;


    //Test strcpy===========================
    char inicio[] = "Cadena inicio";
    char final[20];

    strcpy(inicio,final); //
    cout << final;

    //Test strlen============================
    char e1[] = "Test de strlen";
    int longitud = strlen(e1);
    cout << "Longitud: " << longitud;

   //Test de strcat==========================
    char destino[30] = "Test de ";
    char origen[] = "strcat";

    strcat(destino, origen);

    cout << "Cadena resultante: " << destino << endl;


    return 0;
}
