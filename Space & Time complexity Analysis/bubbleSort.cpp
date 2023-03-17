#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

void BubbleSort(vector<int> &a, int n){
    for(int times=1; times<= n-1; times++) {
        for(int j=0; j<n-times; j++){
            if(compare(a[j], a[j+1])){
                swap(a[j], a[j+1]);
            }
        }
    }
}


int main() {
    int key;
    cin>>key;

    vector<int> arr(n,0);

    for(int i=0; i<n; i++) {
        arr[i]= n-1;
    }

    auto start_time = clock();
    BubbleSort(arr, n);
    auto end_time = clock();

    cout << end_time - start_time << endl;

    return 0; 
}