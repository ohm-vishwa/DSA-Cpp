//it can be execute from 0_main.cpp

// #include <iostream>
// using namespace std;

int fib(int n){
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

// int main(){
//     cout << fib(5);
//     return 0;
// }
