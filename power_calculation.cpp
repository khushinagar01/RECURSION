#include <iostream>
using namespace std;

// Recursive function to calculate power
double power(double b, int e) 
{
    // Base case: if exponent is 0, return 1
    if (e== 0) {
        return 1;
    }
    // Recursive case
    else {
        return b * power(b, e- 1);
    }
}

int main() {
    double base;
    int exponent;
    
    // Input base and exponent from user
    cout << "Enter the base: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    // Output the result of base^exponent
    cout << base << " raised to the power of " << exponent << " is " << power(base, exponent) << endl;
    
    return 0;
}
