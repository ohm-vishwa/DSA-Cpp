//even number of occurences are in pair but not adjacent.
#include <iostream>
#include <vector>
using namespace std;

int findOddOccurence(vector<int> arr){
    int s = 0;
    int e = arr.size() -1;
    int m;
    int ans;
    
    while (s <= e){
        m = s + (e-s)/2;

        if(m%2 == 1){
            if(arr[m] == arr[m-1]){
                s = m+1;
            }
            else{
                e = m-1;
                ans = m;
            }
        }
        else{
            if(arr[m] == arr[m+1]){
                s = m+1;
            }
            else{
                e = m-1;
                ans = m;
            }
        }
        cout << m << endl;
    }
    return ans;
}

int main(){         // 0 1 2 3 4 5 6 7 8 9 10...
    vector<int> arr = {1,1,2,2,3,3,1,1,4,4,5,5,3,3,1,1,7,7,9,23,23,45,45,67,67,23,23};
    cout << arr[findOddOccurence(arr)] << " is Odd number of Occurence." << endl;
    return 0;
}
