/**
 *  @file vectorOperations.cpp
 *  @author Tugcan Olgun
 *  @Date 6 Mar 2017
 *  @version 1.0
 *
 *  @brief BOUN Quiz 1, Vector operations
 *
 *  @section DESCRIPTION
 *
 *  This is the Quiz 1 for Bogazici University Software Engineering 501 class.
 *
 *  User is asked to enter an integer number, depending on that number
 *  a vector with the size of that given number will be created with random numbers.
 *  Using operater overload functions a vector with sum of corresponding elements will be printed.
 *  Using operator overload, sum of multiplications of corresponding elements will be printed.
 */

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct Vect{
    int dim;
    int num[1000];
    Vect(int i) {
        dim = i;
    }
    void Random() {
        for (int i = 0; i <= (dim-1); ++i) {
            num[i] = rand()%100;
        }
    }
};

void operator+=(Vect &first, Vect &second)
{
    if(sizeof(first.num) == sizeof(second.num)) {
        for (int i = 0; i <= (first.dim-1); ++i) {
            first.num[i] += second.num[i];
        }
    }
}
int operator*(Vect &first, Vect &second)
{
    int count = 0;
    if(sizeof(first.num) == sizeof(second.num)) {
        for (int i = 0; i <= first.dim - 1; ++i) {
            count += first.num[i] * second.num[i];
        }
    }
    return count;
}

ostream& operator<<(ostream &out, Vect &val ) {
    for (int i = 0; i <= (val.dim-1); ++i) {
        cout << val.num[i] << " ";
    }
    return out;
}


int main() {
    srand(time(NULL));
    int i;
    cout << "#################################################" << endl;
	cout << "BOUN Quiz 1 - Vector Operations" << endl;
	cout<< "Enter an integer, it will be used for vector size" << endl;
    cout << "_________________________________________________" << endl;
    cout << "Please enter the dimentions of the arrays: " << endl;
    cin >> i;
    Vect arr(i), vrr(i);
    arr.Random();
    arr.Random();
    vrr.Random();
    cout << endl;
    cout << "First array: " << arr << endl;
    cout << "Second array: " << vrr << endl;
    Vect temp(i);
    temp = arr;
    arr += vrr;
    cout << "Sum: " << arr << endl;
    arr = temp;
    int count = arr*vrr;
    cout << "Mul: " << count << endl;
    cout << endl;
    cout << "Program terminated." << endl;


    return 0;
}
