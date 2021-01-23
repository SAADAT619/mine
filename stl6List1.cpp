#include<iostream>
#include<list>
using namespace std;

int main(){
    list<float> mylist;
    list<float> :: iterator it; //create a iterator

    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(52);
    mylist.push_back(-55);

    for (it = mylist.begin(); it != mylist.end(); it++)
    {
       cout << *it << endl;
    }
    
    return 0;
}