#include<iostream>
#include<vector>
using namespace std;

class vector{
    // Data Members

    T *arr;
    int currrentSum;
    int maximumSum;

    public :   vector(int max_size =1){
        currentSum = 0;
        maximumSum = max_size;

        arr = newT[ms];
    }
    void push_back(const T d){
        if(currrentSum == maximumSum){

            // Create a new array and delete the old one & double the capacity

            T * oldArr = arr;
            maximumSum = 2 * maximumSum;

            arr = new T[maximumSum];

            // Copy the elements 
            for(int i=0; i< currrentSum; i++) {
                arr[i] = oldArr[i];
            }


              // delete 
              delete[] oldArr;
        }

        arr[currentSum] = d;
            currrentSum++;
    }

    void pop_back() {
        if(currentSum >= 0) {
            currentSum--;
        }
    }

    bool isEmpty() const {
        return currrentSum;
    }

    T front() const {
        return arr[0];
    }

    T back() const{
        return arr[currrentSum - 1];
    }
}