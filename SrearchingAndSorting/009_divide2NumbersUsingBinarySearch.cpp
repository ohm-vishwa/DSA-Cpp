#include <iostream>
using namespace std;

int divideUsingBinarySearch(int divident, int divisor){
    int negcout = 0;
    if(divisor == 0){
        return 0;
    }
    if(divisor < 0){
        divisor = -divisor;
        negcout++;
    }
    if(divident < 0){
        divident = -divident;
        negcout++;
    }
    int s = 0,e = divident,m,ans;
    while (s <= e){
        m = s+ (e-s)/2;
        if(divisor*m == divident){
            return m;
        }
        if(divisor*m > divident){
            e = m-1;
        }
        else{
            s = m+1;
            ans = m;
        }
    }
    
    if(negcout == 1){
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

    // cout << -divisor<<endl;
    int ans = divideUsingBinarySearch(divident,divisor);
    cout << ans;
    return 0;
}