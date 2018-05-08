/**
 *  @file bitRepresentation.cpp
 *  @author Tugcan Olgun
 *  @Date 20 Feb 2017
 *  @version 1.0
 *
 *  @brief BOUN HW1, Bitwise representation of an integer
 *
 *  @section DESCRIPTION
 *
 *  This is the HW1 for Bogazici University Software Engineering 501 class.
 *
 *  The main purpose of this program is to show bit representation of the number
 *  that is received from user.
 */


#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char **argv)
{
	int intNumber, bitTemp, i;
	unsigned int intNumberUnsigned;
	string getNumber, ShowNumber="";
    cout << "############################################" << endl;
	cout << "BOUN HW1 - Bit representation" << endl;
	cout<< "Enter an integer, the result will be in bits" << endl;
    cout << "____________________________________________" << endl;
	cout << "Please enter a (integer)number:" << endl;
	getline(cin, getNumber);
	intNumber = std::stoi(getNumber);
	intNumberUnsigned = intNumber;
	for(i = 0; i < 32; i++){

		bitTemp = intNumberUnsigned % 2;
		ShowNumber = std::to_string(bitTemp) + ShowNumber;
		intNumberUnsigned = intNumberUnsigned >> 1;

	}

    cout << endl;
	cout << "The result: " + ShowNumber << endl;
    cout << endl;
    cout << "Program terminated." << endl;
	return 0;
}
