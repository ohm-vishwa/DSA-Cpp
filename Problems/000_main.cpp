#include "myHeader.h"
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    //fibonacci
    cout << "\nfibonacci no. at " << n << " is " << fib(n) << " " << endl;

    //prime number
    isPrime(n);

    //subtract of product and sum
    cout << "product - sum = " << subtractProductAndSum(n) << endl;

    //Decimal to binary
    cout << "Binary of " << n <<" is "; 
    decimalToBinary(n);
    cout << endl;

    //binary to decimal
    cout << "Enter Binary String : ";
    int x;
    cin >> x;
    cout << "Decimal of " << x << " is " << binaryToDecimal(x) << endl;

    //reverse integer.
    cout << "reverse of " << n << " is " << reverseInteger(n) << endl;
    return 0;
}