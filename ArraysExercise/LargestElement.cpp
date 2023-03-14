#include<iostream> 
using namespace std;

int largestElem(Vector<int>A){
    int largestElement = INT_MIN;

    for(auto element : A ) {
        largestElem = max(largestElem, element);

    }
    return largestElem;
}


int main( ) {
    int arr[] = {-2,3,5,2,1,-1,6,,-12,3,-4,4,7};
    int n = sizeof(arr)/sizeof(int);

    cout << largestElem(arr,n) << endl;


    return 0;
}