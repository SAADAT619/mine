#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunc(int a, int b){
    return a > b;
}

int main(){
    vector<int> vec;
    vector<int> :: iterator it;

    vec.push_back(12);
    vec.push_back(10);
    vec.push_back(16);
    vec.push_back(15);
    vec.push_back(25);

    //sort the vector in assending order<<<<<<<<<<<<<<<<<<<<<<<<<<
    //sort(vec.begin(), vec.end());


    //sort the vector in decending order>>>>>>>>>>>>>>>>>>>>>>>>>>>
    //sort(vec.begin(), vec.end(), myfunc);

    //Here I want to sort the first three number
    sort(vec.begin(), vec.begin()+3);

    //priting the vector
    for (it = vec.begin(); it !=vec.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}