#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<string, int> m;
    map<string, int> :: iterator it;

    m["dipta"] = 43;
    m["arnob"] = 24;
    m["arnob"] = 44; //though the key element arnob is same so it value will be updated
    m.insert(make_pair("nabil", 41)); //Another way of inserting a table

    // cout << m["arnob"] << endl;

    
    //To print the whole map
    for (it = m.begin(); it !=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    
    
    
    
    
    // it = m.begin();
    // it++; //it will go to the second element
    // //to print the map
    // cout << it->first << endl;
    // cout << it->second << endl;
    return 0;
}