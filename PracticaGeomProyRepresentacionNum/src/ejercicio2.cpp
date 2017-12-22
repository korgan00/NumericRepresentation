#include "ejercicio2.h"
#include <common.h>
#include <iostream>



void resuelveEjercicio2() {
	int entero1010 = intFromBinary("1010");
	int entero111111 = intFromBinary("11111111111111111111111111111111");
	unsigned int uentero111111 = unsignedIntFromBinary("11111111111111111111111111111111");


	cout << endl << "Ejercicio 2:" << endl;
	cout << "  a: " << endl << "\tNOT_Int: " << (~entero1010) << endl << "\tNOT_Bin: " << binaryFromInt(~entero1010);
	cout << "  b: " << endl << "\t<< 1: " << (entero1010 << 1) << "\tBin << 1: " << binaryFromInt(entero1010 << 1);
	cout << "\t<< 2: " << (entero1010 << 2) << "\tBin << 2: " << binaryFromInt(entero1010 << 2);
	cout << "\t<< 4: " << (entero1010 << 4) << "\tBin << 4: " << binaryFromInt(entero1010 << 4);
	cout << "\t<< 6: " << (entero1010 << 6) << "\tBin << 4: " << binaryFromInt(entero1010 << 6);
	cout << "  c: " << endl << "\tbinAsInt: ";
	printBinaryAsInt("11111111111111111111111111111111");
	cout << endl << "\tbinAsUInt: ";
	printBinaryAsUnsignedInt("11111111111111111111111111111111");
	cout << endl << "    Los resultado son diferentes porque esta hecho con shifts";
	cout << endl << endl << "\tSIGNED <<2 : " << (entero111111 << 2);
	cout << endl << "\tUNSIGNED <<2 : " << (uentero111111 << 2);
	cout << endl << "    En el signed se vuelve mas negativo porque no afecta al bit de signo y multiplica el número";
	cout << endl << "    En el unsigned decrece porque aumentan los 0 por la derecha";
	//cout << "c: \n\tNOT_Int: " << (~entero1010) << "\n\tNOT_Bin: " << binaryFromInt(~entero1010) << endl;
}