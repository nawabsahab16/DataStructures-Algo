#include<iostream>
using namespace std;


int LowerBound(vector<int> A, int Val) {
    int sz= A.size();
    int l=0, r=(sz-1);
    int answer = -1;


  while(1<= r) {
    int mid = (1+r)/2;
    if(a[mid]>Val){
        r = mid - 1;
    } 


    else {
        answer = a[mid];
        l += mid;


    }


  }
   return answer;
}