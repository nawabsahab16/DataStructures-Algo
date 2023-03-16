#include<iostream>
#include<vector>
using namespace std;


pair<int, int> closetSum(vector<int>, arr, int x){
    int res_l, res_r;
    int n = arr.size();
    int l =0 ; r= n-1; diff=INT_MIN;

  while(r>l) {
    if(abs(arr[l] + arr[r]-x) <diff) {
        res_l = l;
        res_r = r;

        diff = abs(arr[l] + arr[r] - x );
    }

    if(arr[l] + arr[r] > x)
      r--;
    else 
    r++;

  }

  return{arr[res_l] , arr[res_r]};
 

}


int main() {

}