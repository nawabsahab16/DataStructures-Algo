#include<iostream>
using namespace std;
 

int Linear_Search(int arr[], int n, int key) {

    for(int i=0; i<=n; i++) {
        if(arr[i]==key) {
            return i;
        }
        return -1;
    }
}




int main() {
    int arr[] = {10,15,1,26,4,78,65,12,20};
    int n = sizeof(arr)/ sizeof(int);

    int key;
    cin>>key;

    int index = Linear_Search(arr, key , n);

    if(index!=-1) {
        cout << key << "Is PRESENT at Index " << index <<endl;

    }
    else {
        cout << key << "Not FOUND !" << endl;
    }

    return 0;

}
