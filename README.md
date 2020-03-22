# GF2-8
Class for basic finite field operations on GF(2^8).

## Operators overloaded: 
  * Addition + : Performs GF(2^8) addition, equivalent to bitwise XOR.
  * Multiplication * : Performs GF(2^8) multiplication using the Russian method.
  * Division / :  Performs GF(2^8) division by computing the multiplicative inverse through brute force.
  * Assignement = : Assigns an int to the variable value.
  * Comparison == : Returns true if the values of two gf28 variables are equal.
  * Modulo %  : Performs the GF(2^8) modulo computation;
  * Stream << : Displays the variable value as hex
  
## Example usage:
 
    gf28  a = 0x57, b = 0x83, c;
    
    //Finite field multiplication
    c = a* b;
    cout << c;
    
    //Finite field division
    c = a/b;
    cout << c;
    
## Notes
Passing data types to the operators has order prevalecence, that is `0x02*a` is computed as integer multiplication, whereas `a*0x02` is computed as a finite field multiplication.
