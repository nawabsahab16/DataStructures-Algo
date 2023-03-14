#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
 using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int>arr(n,0);

    for(int i =0; i<n; i++) {
        arr[i] = n-1;
    }

    auto start_time = clock();
    sort (arr.begin(), arr.end());
    auto end_time - start_time << endl;

    return 0;
}