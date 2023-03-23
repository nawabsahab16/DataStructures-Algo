#include<iostream>
using namespace std;

 
 bool compare(int a, int b){
    return a>b;
 }

 vector<int> sortingWithComperator( vector<int>v, bool flag) {
 
    if(flag) sort(v.begin(), v.end());

    else sort(v.begin() , v.end(), compare);

    return v;
    
 }