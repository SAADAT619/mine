#include<iostream>
#include<vector>
using namespace std;

int main(){
     
     int array[3];

     vector <int> vec;
    vec.push_back(35); // vec[0] = 35
    vec.push_back(15); //vec[1] = 15
    // 35 15
    vec.push_back(25); //vec[2] = 25
    // 35 15 25

    //new value assign to the vector
    vec[0] = 12;
    //12 15 25
    cout << vec[0] <<endl;
    return 0;
}