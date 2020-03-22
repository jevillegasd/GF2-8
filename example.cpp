
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>

#include "gf28.h"

using namespace std;
// Example of use 
int  main() {
	gf28  a = 0x57, b = 0x83, c,c2,c3;
	uint8_t  AES_ip = 0x11b; //AES irreductible polynomial

	c  = a * b;		//Correct: Multiplication carried in GF(2^8)
	c2 = a * 0x83;  //Correct: Multiplication carried in GF(2^8)
	c3 = 0x57 * b;  //Not correct: Here the int type takes prevalecence so the operation is carried as integer multiplication modulo 255 (reduced to uint8)  

	//The << operator is overloaded to display as hex
	cout << "\nMultiply: a*b=" << a * b << " as decimal: " << (int)(a*b);
	cout << "\nMultiply: a*0x83=" << c2 << "0x57*b="<< c3;

	c = a / b; c2 = a / a;
	cout << "\n" << a / b;
	return 0;
}