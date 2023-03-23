#include<iostream>
using namespace std;

int pairSticks( vector<int> length, int d){

    sort(length.begin() , length.end() );

    int res = 0;

    for(int i=0; i<length.size()-1; i++) {

        if(length[i+1] - length[i] <=d){
            res++;
            i++;
        }
    }
    return res;
}