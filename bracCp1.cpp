#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N > 0){
        cout << "Positive Integer" << endl;
    }
    else if(N < 0){
        cout << "Negative Integer" << endl;
    }
    else{
        cout << "Zero" << endl;   
    }
   
    
    return 0;
}