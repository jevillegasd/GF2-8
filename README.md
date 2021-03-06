# GF2-8
Class for basic finite field operations on GF(2^8) in c++.

## Operators overloaded: 
  * Addition + : Performs GF(2^8) addition, equivalent to bitwise XOR.
  * Multiplication * : Performs GF(2^8) multiplication using the Russian method.
  * Division / :  Performs GF(2^8) division by computing the multiplicative inverse through brute force.
  * Assignement = : Assigns an int to the variable value.
  * Comparison == : Returns true if the values of two gf28 variables are equal.
  * Modulo %  : Performs the GF(2^8) modulo computation;
  * Stream << : Displays the variable value as hex

## Functions: 
 * xtime `gf28.xtime()`: Returns the multiplication by 2 ('x') over GF(2^8), as defined for the Rijndael AES algorithm.
 * x1time `gf28.x1time()`: Returns the multiplication by 3 ('x+1') over GF(2^8).

## Example usage:
 
 ```c++
 #include <iostream>
 #include "gf28.h"
 
    gf28  a = 0x57, b = 131, c;
    
    //Finite field multiplication
    c = a * b;
    cout << c;
    
    //Finite field division
    c = a / b;
    cout << c;
```
## Notes
Passing data types to the operators has order prevalecence, that is `0x02*a` is computed as integer multiplication, whereas `a*0x02` is computed as a finite field multiplication. Substraction is not implemented, but note that in a finite field with characteristic 2, substraction is equivalent to addition (abd equivalent to binary XOR).
