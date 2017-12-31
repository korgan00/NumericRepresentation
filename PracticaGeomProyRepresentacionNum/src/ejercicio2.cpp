#include "ejercicio2.h"
#include <common.h>
#include <iostream>
using namespace std;


void resuelveEjercicio2() {
	int entero1010 = intFromBinary("1010");


	cout << endl << endl << "Ejercicio 2:" << endl;
	cout << "  A ====================================================================================== " 
        << endl << "\tNOT_Int: " << (~entero1010) 
        << endl << "\tNOT_Bin: " << binaryFromInt(~entero1010);
	cout << "  B ====================================================================================== " 
        << endl << "\t<< 1: " << (entero1010 << 1) 
        << "\tBin << 1: " << binaryFromInt(entero1010 << 1);
	cout << "\t<< 2: " << (entero1010 << 2) << "\tBin << 2: " << binaryFromInt(entero1010 << 2);
	cout << "\t<< 4: " << (entero1010 << 4) << "\tBin << 4: " << binaryFromInt(entero1010 << 4);
	cout << "\t<< 6: " << (entero1010 << 6) << "\tBin << 4: " << binaryFromInt(entero1010 << 6);

	cout << "  C ====================================================================================== " << endl << "        binAsInt: ";

    int entero111111 = intFromBinary("11111111111111111111111111111111");
    unsigned int uentero111111 = unsignedIntFromBinary("11111111111111111111111111111111");

	printBinaryAsInt("11111111111111111111111111111111");
	cout << endl << "        binAsUInt: ";
	printBinaryAsUnsignedInt("11111111111111111111111111111111");
	cout << endl << "      Los resultado son diferentes porque esta hecho con shifts";
    cout << endl << "    i   ----------------------------------";
    cout << endl << "\t  SIGNED <<2 : " << (entero111111 << 2);
    cout << endl << "\t  UNSIGNED <<2 : " << (uentero111111 << 2);
    cout << endl << "\tEn el signed se vuelve mas negativo porque no afecta al bit de signo y multiplica el número";
    cout << endl << "\tEn el unsigned decrece porque aumentan los 0 por la derecha";

    cout << endl << endl << "    ii  ----------------------------------";

    int entero1 = 1;
    unsigned int uentero1 = 1;

    cout << endl << "\t  SIGNED + " << entero1 << " signed : " << (entero111111 + entero1);
    cout << endl << "\t  SIGNED + " << uentero1 << " unsigned : " << (entero111111 + uentero1);
    cout << endl << "\t  UNSIGNED + " << entero1 << " signed : " << (uentero111111 + entero1);
    cout << endl << "\t  UNSIGNED + " << uentero1 << " unsigned : " << (uentero111111 + uentero1);
    cout << endl << "\tEn ambos casos se va a 0 porque en el caso del signed: -1 + 1 = 0";
    cout << endl << "\tEn el caso del unsigned hace overflow y se reinicia el entero";

    cout << endl << endl << "    iii ----------------------------------";
    int pink = 0xCC6699;
    cout << endl << "\t  Pink = 0xCC6699, Equivale al numero: " << pink;
    cout << endl << "\t  R: " << (255 & (pink >> 16));
    cout << endl << "\t  G: " << (255 & (pink >> 8));
    cout << endl << "\t  B: " << (255 & pink);
}