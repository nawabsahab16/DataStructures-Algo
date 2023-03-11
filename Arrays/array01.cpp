#include<iostream>
using namespace std;
int main() {
    int marks[100];

    int n;
    cout << "Enter the number of students ";
    cin>>n;

    // Assign value 

    marks[0] = -1;

    // Input 

    for(int i = 1; i<n; i++){
        cin>> marks[i];
   
   // Update 
       marks[i]= marks[i]*2;  
    }

    for(int i=1; i<=n ; i++){
        cout << marks[i]<< " , " ;

    }

    cout << endl;

    return 0;
    
}

//btw code push hogyaa
