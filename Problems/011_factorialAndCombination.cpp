// #include <iostream>
// using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int combination(int n, int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

// int main(){
//     cout << combination(8,3); //56
//     return 0;
// }