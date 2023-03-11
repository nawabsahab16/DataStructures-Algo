#include<iostream>
using namespace std;

void printArray(int arr[] ) {


    cout << "In functions " << sizeof(arr) << endl;
}




int main(){

    int arr[] = {1,2,3,4,5,6,7,8,10};
    int n = sizeof(arr)/sizeof(int);

    cout << "In Main " << sizeof(arr) << endl;

     printArray(arr);

     return 0;

}