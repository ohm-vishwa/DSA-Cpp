#include <iostream>
#include <cmath>
#include "1_fibonacci.cpp"
#include "2_isPrime.cpp"
#include "3_subtractProductAndSum.cpp"
#include "4_decimalToBinary.cpp"
#include "5_binaryToDecimal.cpp"


using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "\nfib of " << n << " is " << fib(n) << " " << endl;

    isPrime(n);

    cout << "product - sum = " << subtractProductAndSum(n) << endl;

    cout << "Binary of " << n <<" is "; 
    decimalToBinary(n);
    cout << endl;

    cout << "Enter Binary String : ";
    cin >> n;
    cout << "Binary of " << n << " is " << binaryToDecimal(n) << endl;
    return 0;
}