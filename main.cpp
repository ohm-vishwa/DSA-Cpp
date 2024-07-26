#include <iostream>
#include <cmath>
using namespace std;

// fibonacci series, is prime, 
int fib(int n){
    // cout << "\nfibonacci series " << endl;
    int a = 1 , b = 1, c;
    if(n <= 1){
        return 1;
    }
    if(n <= 2){
        return 1;
    }
    for (int i = 3 ; i <= n ; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

void isPrime(int n){
    // cout << "\n\nis prime number" << endl;
    bool isPrime = true;
    if(n == 1 ){
            cout << n << "is a prime number" << endl;
        return;
    }
    for (int i = n-1 ; i > 1 ; i--){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }     
}

int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n != 0){
            product = product * (n%10);
            sum = sum + (n%10);
            n = n/10;
        }
        return product - sum;
    }
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "\nfib of " << n << " is " << fib(n) << " " << endl;;

    isPrime(n);

    cout << "product - sum = " << subtractProductAndSum(n) << endl;
    return 0;
}