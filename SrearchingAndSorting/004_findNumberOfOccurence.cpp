// elemets should be in ascending order.
#include <iostream>
#include <vector>
#include "002_findFirstOccurence.cpp"
#include "003_findLastOccurence.cpp"
using namespace std;

int numberOfOccurence(vector<int> arr, int key){
    int firstoccur,lastoccur;

    firstoccur = findFirstOccurence(arr,key);

    if(firstoccur == -1){
        return 0;
    }
    lastoccur = findLastOccurence(arr,key);
    return (lastoccur-firstoccur)+1;
}

int main(){
    vector<int> arr = {0,1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7};
    int key = 6;
    int result = numberOfOccurence(arr,key);
    cout << "Number of Occurences of " << key << " is : " << result << endl;
    return 0;
}