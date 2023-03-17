#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {1,2,4,10,15,17};

    // push back 0(1);

    arr.push_back(16);

    // when we have to delete the last element of the array 

    arr.pop_back();

    // print all the elements of the array

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;

    }



// find the size of an array (no of elements )  

cout << arr.size() << endl;

// find the capacity of my array

cout<< arr.capacity << endl;



// fill constructor 

 vector <int> arr(10,7); -----> // output would be 7,7,7,7,7,7,7,7,7,7

}