
// C++ program to find the modular multiplicative inverse
//using Extended Euclidean Algorithm
#include <iostream> 
using namespace std;

// Function to calculate the greatest common divisor of a and m

int gcdCalculator(int a, int m, int* x, int* y)
{
    // Base of Recursive Calls
    if (a == 0) 
    {
        *x = 0, *y = 1;
        return m;
    }
  
    // Store results of recursive call
    int x1, y1; 
    int gcd = gcdCalculator(m % a, a, &x1, &y1);
  
    // Update x and y using results of recursive call
    *x = y1 - (m / a) * x1;
    *y = x1;
    return gcd;
}
 
// Function to find the modular multiplicative inverse of a

void multInverse(int a, int m)
{
    int x, y;

    int g = gcdCalculator(a, m, &x, &y);
  
  // The modular multiplicative inverse only exists when the greater 
  //common divisor of a and m is 1. So, we check if it exists
    if (g != 1)
        cout << "The Modular Multiplicative Inverse does not exist.";
    else
    { 

        // we perform the euclidean algorithmic process 
      //to find the moduar multiplicate inverse

        int mult_inv = (x % m + m) % m;

        cout << "The modular multiplicative inverse is: " << mult_inv;

    }
}
 // Driver Function
 
 int main() {
    int a = 7, m = 11;
    // Function call
    multInverse(a, m);

    return 0;
 }
