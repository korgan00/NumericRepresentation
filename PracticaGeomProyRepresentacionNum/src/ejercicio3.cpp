#include <ejercicio3.h>
#include <common.h>
#include <iostream>
using namespace std;


void resuelveEjercicio3() {
    int a = 4;
    int b = -4;

    cout << endl << endl << endl << "Ejercicio 3:" << endl;
    cout << "  A ====================================================================================== " << endl;
    {
        printf("\ta (bin): %s", binaryFromInt(a).c_str());
        printf("\tb (bin): %s", binaryFromInt(b).c_str());
        printf("\ta+b (bin): %s", binaryFromInt(a + b).c_str());
    }
    cout << "  B ====================================================================================== " << endl;
    {
        printf("\tEl resultado de a es por definicion, el resultado de b es el -4 en binario\n");
        printf("\tEsta lleno de 1s porque es un numero cercano a 0 en negativo\n");
        printf("\tEl tercer número es 0 porque 4-4 es 0\n");
    }

    cout << "  C ====================================================================================== " << endl;
    {
        char d = (char)128;
        char e = (char)-128;
        cout << endl << "    i   ----------------------------------" << endl;
        printf("\tSIGNED::\n\t\td(bin): %s\t\te(bin): %s", binaryFromChar(d).c_str(), binaryFromChar(e).c_str());
        printf("\tUNSIGNED::\n\t\td(bin): %s\t\te(bin): %s", binaryFromUnsignedChar(d).c_str(), binaryFromUnsignedChar(e).c_str());
        cout << endl << "    ii  ----------------------------------" << endl;
        cout << "\tEl char es un byte y puede tomar valores de 0 a 255." << endl;
        cout << "\tAl ser signed el byte llega desde -128 hasta 127." << endl;
        cout << "\tCuando ponemos 128, hace overflow y se convierte en -128." << endl;
    }

}