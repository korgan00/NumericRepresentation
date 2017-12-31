#include <common.h>
#include <sstream>

#define ZERO ((int)'0');

int intFromBinary(const string& num) {
	int integer = 0;

	for (char a : num) {
		integer <<= 1;
		integer += ((int)a) - ZERO;
	}

	return integer;
}

unsigned int unsignedIntFromBinary(const string& num) {
	unsigned int integer = 0;

	for (char a : num) {
		integer <<= 1;
		integer += ((int)a) - ZERO;
	}

	return integer;
}


string binaryFromInt(int x) {
	unsigned int currentNum = x;
	char currentChar = '0';
	string binary;

	while (currentNum != 0) {
		currentChar = (currentNum & 1) + ZERO;
		currentNum >>= 1;
		binary.insert(binary.begin(), 1, currentChar);
	}

    if (binary == "") {
        binary = "0";
    }

	binary.insert(binary.end(), 1, '\n');

	return binary;
}

string binaryFromChar(char c) {
    unsigned char currentNum = c;
    char currentChar = '0';
    string binary;

    while (currentNum != 0) {
        currentChar = (currentNum & 1) + ZERO;
        currentNum >>= 1;
        binary.insert(binary.begin(), 1, currentChar);
    }

    if (binary == "") {
        binary = "0";
    }

    binary.insert(binary.end(), 1, '\n');

    return binary;
}
string binaryFromUnsignedChar(unsigned char c) {
    unsigned char currentNum = c;
    char currentChar = '0';
    string binary;

    while (currentNum != 0) {
        currentChar = (currentNum & 1) + ZERO;
        currentNum >>= 1;
        binary.insert(binary.begin(), 1, currentChar);
    }

    if (binary == "") {
        binary = "0";
    }

    binary.insert(binary.end(), 1, '\n');

    return binary;
}


void printBinaryAsInt(const string& num) {
	cout << intFromBinary(num);
}
void printBinaryAsUnsignedInt(const string& num) {
	cout << unsignedIntFromBinary(num);
}
void printAsBinary(int x) {
	cout << binaryFromInt(x);
}