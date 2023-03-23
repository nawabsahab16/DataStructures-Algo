#include<iostream>
using namespace std;

void SelectionSort() {
   
   for(int pos = 0; pos<= n-2; pos++){
    int current = a[pos];
    int min_pos = pos;

    for(int j=pos; j<n; j++) {
        if(a[j]<a[min_pos]){
            min_pos = j;
        }
    }

    swap(a[min_pos], a[pos]);
   }


}

