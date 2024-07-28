// #include <iostream>
// using namespace std;

int bitwiseComplement(int n){
    int clone = n;
    int bitmask = 1;
    if(n == 0){
        return 1;
    }
    while (clone != 0){
        if(n|1){
            bitmask = (bitmask << 1) + 1;
        }
        clone = clone >> 1;
    }
    bitmask = bitmask >> 1;
    return (n ^ bitmask);  
}

// int main(){
//     cout << bitwiseComplement(10) << endl;
//     return 0;
// }