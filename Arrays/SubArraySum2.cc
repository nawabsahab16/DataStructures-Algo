#include<iostream>
using namespace std;

 

int maximum_SubArr(int arr[] , int n){
    int currentSum = 0;
    int LargestSum = 0;


// famous kadane's algorithm 
    for(int i=0; i<n; i++) {
        currentSum = currentSum + arr[i];

        if(currentSum < 0) {
            currentSum= 0;

        }
int largest;
         largest = max( LargestSum, currentSum);
    }
    return largest; 
}



int main() {

   int arr[] = {-1,2,4,5,-2,7,8,9,-10,1,15};
   int n = sizeof(arr)/ sizeof(int);


   cout << maximum_SubArr(arr, n) << endl;


   return 0;
}