#include<iostream>
#include<vector>
using namespace std;

int main() {
     
     // 2-D vector

     vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14}};


        for(int number: arr[i]) {
            cout << number << "," ;
        }

        cout << endl;
}

arr[0][0] += 10; // update;