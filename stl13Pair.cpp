#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
    //In pair we can contain only two things : key , value

    // pair<string, int> p;  


    //we can also make pair in vector
    vector<pair<int, string>> v;
    //that means
    //index 0 - 21,dipto
    //index 1 - 22,nabil
    v.push_back(make_pair(21, "dipto"));
    v.push_back(make_pair(25, "nabil"));
    //To see the vector key and value
    // cout << v[0].first << " " << v[0].second << endl;




      //We can also use iterator
    vector<pair<int, string>> :: iterator it;

    //to print the iterator we can use a loop
    for ( it = v.begin(); it !=v.end(); it++)
    {
        cout << it->first << " " << it->second <<endl;
    }
    



    

    
    
    // pair<string, int> p("dipto", 21);  //I can also assign key and value here
    // p.first = "dipta";
    // p.second = 21;
    
    
    // p = make_pair("dipto", 21); // key and value can be assign like this
    // cout << p.first << " " << p.second << endl;
    
    return 0;
}