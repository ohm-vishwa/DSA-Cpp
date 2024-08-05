#include <iostream>
using namespace std;

int divideUsingBinarySearch(int divident, int divisor){
    int negcount = 0;
    if(divisor == 0){
        return 0;
    }
    if(divisor < 1){
        divisor = -divisor;
        negcount++;
    }
    if(divident < 1){
        divident = -divident;
        negcount++;
    }
    int s = 0,e = divident,m,ans;
    while (s <= e){
        m = s+ (e-s)/2;
        if(divisor*m == divident){
            ans = m;
        }
        if(divisor*m > divident){
            e = m-1;
        }
        else{
            s = m+1;
            ans = m;
        }
    }

    if(negcount == 1){
        return -ans;
    }

    return ans;
}

int main(){
    int divident;
    int divisor;
    cout << "Enter divident : ";
    cin >> divident;
    cout << "Enter divisor : ";
    cin >> divisor;

    // cout << (-8/-4)<<endl;
    int ans = divideUsingBinarySearch(divident,divisor);
    cout << ans;
    return 0;
}