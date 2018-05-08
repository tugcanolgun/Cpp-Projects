# Brief
BOUN HW3, Overload bitwise operators

# Details
@file overloadBitOperators.cpp

@author Tugcan Olgun

@Date 6 Mar 2017

@version 1.0

# Description
This is the HW3 for Bogazici University Software Engineering 501 class.

Main purpose of this program is bitwise << >> operator overloading.
User is asked to enter two complex numbers with space in between real and imaginary part. Example : 3 5 input will be evaluated as 3+5i
+ - * operators are overloaded. So it will print Sum, Sub and Mul in order as a result.

# Compile
``c++ overloadBitOperators.cpp -o exec``

This will create a file named ``exec``. If you are receiving an error please consult Wiki Troubleshooting section.

# Example
```
Enter real and imaginary separately for the first number. ex: 3 5:
6 7
Enter real and imaginary separately for the second number. ex: 4 6:
76 11

The result of +(sum): 82 + 18i
The result of -(sub): -70 + -4i
The result of *(mul): 379 + 598i
```
