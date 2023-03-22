#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int>arr){

      int i, j, n=arr.size();
      bool swapped;

      for(int i=0; i<n-i-1; i++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
      }

      if(swapped ==  false) {
        break;
      }

      return arr;

}


int main(){


    int arr[] = {-2,5,5,1,4,6,0,7,-5};
    int n= sizeof(arr)/sizeof(int);


    optimizedBubbleSort(arr,n);

    for(auto x: arr){
        cout << x <<"," <<endl;
    }

    return 0;

}