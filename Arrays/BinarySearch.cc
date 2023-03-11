#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key ){

    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start+ end)/2;

         if(arr[mid==key] ) {
            return key;
         }

         else if(arr[mid > key]){
            end =mid-1;
         }
         else{ 
            start = mid + 1;
         }
         return -1;
    }
            

     int arr[] = {10,20,30,45,60,72, 89,100};
     int n = sizeof(arr)/sizeof(int);

     int key;
     cin>> key;


     int index= BinarySearch(arr, n ,key);


     if(index != 1) {
        cout << key << "Is present at Index " << index << endl;
     }
     else {
        cout << key << "Not FOUND  !!" << endl;
        
        
     }
}