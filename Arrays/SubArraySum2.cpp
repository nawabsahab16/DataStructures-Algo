#include<iostream>
using namespace std;

int LargestSubArrSum2(int arr[], int n){

    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix [i] = prefix[i - 1] + arr[i] ;
    }

    int largest_Sum = 0;
    for(int i=0; i<n; i++){
        for( int j=i; j<n; j++){
             int SubArraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];

             largest_Sum =  max(largest_Sum , SubArraySum);
        }

    }
    return largest_Sum;

    }

int main() {|

    int arr[]={-2,3,5,2,1,-1,6,,-12,3,-4,4,7};

    int n = sizeof(arr)/sizeof(int);

    cout << LargestSubArrSum2(arr, n) << endl;
 }
