#include "myHeader.h"
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    //fibonacci
    cout << "\nfibonacci no. of " << n << " is ==>  ";
    for(int i = 1 ; i <= n ; i++){
        cout << fib(i) << ", ";
        if(fib(i) > 1134903170){
            cout << "..... not in range.";
            break;
        }
    }
    cout << endl;

    //prime number
    if(isPrime(n)){
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is a not prime number." << endl;
    }

    //subtract of product and sum
    cout << "product - sum = " << subtractProductAndSum(n) << endl;

    //Decimal to binary
    cout << "Binary of " << n << " is " << decimalToBinary(n) << endl; 

    //binary to decimal
    cout << "Enter Binary String : ";
    int x;
    cin >> x;
    cout << "Decimal of " << x << " is " << binaryToDecimal(x) << endl;

    //reverse integer.
    cout << "reverse of " << n << " is " << reverseInteger(n) << endl;

    // 1's Compliment in bits
    cout << "1's Compliment of " << n << " is " << bitwiseComplement(n) << " , \"" << decimalToBinary(n);
    cout << "\"" << " ==> \"" << decimalToBinary(bitwiseComplement(n))<< "\"" << endl;

    //check perfect square
    int a;
    cout << "Enter number to check Perfect square : ";
    cin >> a;
    if(isPowerOf2(a)){
        cout << a << " is a perfect square." << endl; 
    }
    else{
        cout << a << " is not a perfect square." << endl; 
    }
    
    //power
    int b;
    cout << "power function arguments," << endl;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;
    cout << a << "^" << b << " is " << power(a,b) << endl;

    //is Even
    if(isEven(n)){
        cout << n << " is Even. " << endl; 
    }
    else{
        cout << n << " is Odd." << endl;
    }
    return 0;
}