#include<iostream>
#include<vector>
using namespace std;

int main(){
    //how to print the vector
    
    //vector<int> vec;
    
    // vec.push_back(21);
    // vec.push_back(25);
    // vec.push_back(45);
    // vec.push_back(65);

    // cout << "Total number of vector :" << vec.size() <<endl;
    
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << endl;
    // }
    
    //----------------------------------------------------------------------------
    //Another way of printing the vector is
    // vector<int> vec(5,0); //first one is the number of elements and second one is the elements of the vector
    
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] <<endl;
    // }
    //-------------------------------------------------------------------------------
    // ---------------------------vector printing with itearator---------------------
    vector<int> vec;
    vector<int> :: iterator it;

    for (int i = 0; i <= 5; i++)
    {
        vec.push_back(i);
    }
    
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    puts("");
    it = vec.begin();
    cout << *it << endl;
    




    return 0;
}