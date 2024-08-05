#include <iostream>
#include <vector>
using namespace std;

int sqrtUsingBinarySearch(int n){
    int s = 0;
    int e = n;
    int m;
    int ans = -1;
    while(s <= e){
        m = s + (e-s)/2;
        if(m*m == n){
            return m;
        }
        if(m*m > n){
            e = m-1;
        }
        else{
            s = m+1;
        ans = m;
        }
    }
    return ans;
}

double precisionSqrt(int precision,int result, int n){
    if(precision > 5){
        precision = 5;
    }
    double step = 0.1;
    double ans;
    for(int i = 0 ; i < precision ; i++){
        for(double j = result ; j*j <= n ; j += step){
            ans = j;
        }
        step = step/10;
    }
    return ans;
}

int main(){
    int n;
    int precision;
    cout << "Enter number for sqrt : ";
    cin >> n;
    cout << "Enter precision : ";
    cin >> precision;
    double result = sqrtUsingBinarySearch(n);

    cout << "sqrt of "<< n << " is : " << sqrtUsingBinarySearch(n) << endl;
    cout << "aproximate value of sqrt "<< n << " is : " << precisionSqrt(precision,result,n) << endl;
    return 0;
}