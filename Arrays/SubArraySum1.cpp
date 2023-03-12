#include<iostream>
using namespace std;

int largestSubarraySum(int arr[], int n){
    int largest_SUM = 0;

    for(int i=0; i<n;i++){
       for(int j=1; j<n;j++){
         int SubarraySum= 0;

    for(int k=i; k<n; k++){
        SubarraySum += arr[k];

    }

    largest_SUM= max(largest_SUM, SubarraySum);
 }   
}


return largest_SUM;
}

int main() {

    int arr[] = {10,12,15,20,32,34,86,90};

    int n= sizeof(arr)/sizeof(int);

    cout << largestSubarraySum(arr,n) << endl;


    return 0;
}