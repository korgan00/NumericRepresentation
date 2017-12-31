#pragma once
#include <iostream>
#include <string>
using namespace std;

int intFromBinary(const string& num);
unsigned int unsignedIntFromBinary(const string& num);
string binaryFromInt(int num);

string binaryFromChar(char c);
string binaryFromUnsignedChar(unsigned char c);

void printBinaryAsInt(const string& num);
void printBinaryAsUnsignedInt(const string& num);
void printAsBinary(int x);
