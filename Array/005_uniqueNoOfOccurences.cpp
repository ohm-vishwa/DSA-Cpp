//Leet code 1207
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

    bool uniqueNoOfOuurences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> s;
        for(int x : arr)
            mp[x]++;

        for(auto x : mp){
            if(s.find(x.second)!=s.end())
            return false;
            else
            s.insert(x.second);
            

        }
    return true;
    }

int main(){
    vector<int> arr = {1,5,4,1,3,1,3,4,4,4};
    // uniqueNoOfOuurences(arr);
    cout << uniqueNoOfOuurences(arr);
    return 0;
}