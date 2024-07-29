// #include <iostream>
// using namespace std;

int power(int a, int b){
    int ans = 1;
    if(b < 0){
        return 0;
    }
    for(int i = 1 ; i <= b; i++){
        ans = ans * a;
    }
    return ans;
}

// int main(){
//     cout << power(2,3); //8
//     return 0;
// }