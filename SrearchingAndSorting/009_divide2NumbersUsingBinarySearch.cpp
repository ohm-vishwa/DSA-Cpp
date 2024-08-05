#include <iostream>
using namespace std;

double precision(int,int,int);

double divideUsingBinarySearch(int divident, int divisor){
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
    int s = 0,e = divident,m;
    double ans;
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
    ans = precision(divident,divisor,ans);
    if(negcount == 1){
        return -ans;
    }

    return ans;
}

double precision(int divident, int divisor, int result){
    double step = 0.00001;
    double ans;
    for(int i = 0 ; i < 5 ; i++){
        for(double j = result ; j*divisor <= divident ; j+= step){
            ans = j;
        }
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

    double ans = divideUsingBinarySearch(divident,divisor);
    cout << divident<< "/" << divisor <<" = "<< ans << endl;
    return 0;
}