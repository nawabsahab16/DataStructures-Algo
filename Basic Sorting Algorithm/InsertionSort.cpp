#include<iostream>
#include<cname>
using namespace std;

void InsertionSort(int a[], int n){
    for(int i=1; i<=n-1; i++){
        int current = a[i];

        int prev = i-1;
        while(prev>=0 && a[prev]>current){
            a[prev+1] = a[prev];
            prev =prev-i;
        }

        a[prev + 1] =current;


    
    }
}


int main() {


    int arr[] = {-2,3,4,-1,5,-12,6,1,3}
    int n = sizeof(arr)/sizeof(int);

    InsertionSort(arr,n);

    for(auto x: arr){
        cout << x << ",";
    }

    return 0;
}