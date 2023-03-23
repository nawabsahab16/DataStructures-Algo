#include<iostream>
#include<vector>
using namespace std;

  bool compare(int a, int b){
    return a>b;
  }

  vector<pair<int,int>> sortCartesian(vector<pair<int>> v){
    sort(v.begin() , v.end());

    return v;
  } 