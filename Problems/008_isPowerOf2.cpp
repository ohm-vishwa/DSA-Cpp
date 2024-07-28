//leet code Q. 231
// #include <iostream>
// using namespace std;

bool isPowerOf2(int n){
    if(n < 1 ){
        return false;
    }
    int ans = 1;
    for(int i = 0 ; i <= 30 ; i++){
        if(n == ans){
            return true;
        }
        ans = ans << 1;
    }
        return false;
}

// int main(){
//     cout << isPowerOf2(16);
//     return 0;
// }