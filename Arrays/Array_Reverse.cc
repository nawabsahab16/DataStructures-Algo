#include<iostream>
using namespace std;

void  Reverse_Array(int arr[], int n){
    int start = 0;
    int end = n- 1;

    while(start <= end) {
        swap(arr[start], arr[end]);

        start += 1;
        end -= 1;
    }
}

int main(){
    int arr[] = {10,20,30,35,40,42,49,60,70};
    int n = sizeof(arr)/sizeof(int);


    Reverse_Array(arr , n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " " << endl;

    }
    return 0;
}