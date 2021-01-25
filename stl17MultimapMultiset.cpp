#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
    
    
    //difference between map and multimap is : I can store dublicate  values in multimap but in map I can't
    multimap<string, int> m;
    multimap<string, int> :: iterator it;
    m.insert(make_pair("dipto", 43));
    m.insert(make_pair("dipto", 25));        //Here all the names are same but their values are different
    m.insert(make_pair("dipto", 65));


    //Top print the multimap 
    for (it = m.begin(); it !=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }





    //difference between set and multiset : I can store dublicate key or values in multiset but I can't do it on set
    multiset<int> s;
    multiset<int> :: iterator it1;

    s.insert(100);
    s.insert(100);  //We can print dublicate values in multiset
    s.insert(100);
    s.insert(100);

    for (it1 = s.begin(); it1 !=s.end(); it1++)
    {
        cout << *it1 << endl;
    }
    
    





    return 0;
}