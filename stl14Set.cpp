#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    // set<int> s;
    // set<int> :: iterator it;


    // //Insert values in set : Insert will add the numbers in accessding order. I can not insert one value at one time
    // s.insert(10);
    // s.insert(15);
    // s.insert(14);
    // //Note : I can not insert any dublicate value in set



    set<string> s;
    set<string> :: iterator it;

    s.insert("dipto");
    s.insert("nabil");
    s.insert("karfin");
    s.insert("ragim");

    
    





    // it = s.find(15);
    // s.erase(it);

    //I can also write this line like this'
    // s.erase(s.find(15));


    //To print the iterator
    // for ( it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it <<endl;
    // }
    
    return 0;
}