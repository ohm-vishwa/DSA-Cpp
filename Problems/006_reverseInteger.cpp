// #include <iostream>
// using namespace std;

int reverseInteger(int x) {
        int num = 0;
        while(x != 0){
        if(num > __INT_MAX__/10 || num < -__INT_MAX__/10){
            return 0;
        }
            num = (num * 10) + (x % 10);
            x = x / 10;
        }
        return num;
}

// int main(){
//     cout << reverseInteger(-123456789);
//     return 0;
// }
