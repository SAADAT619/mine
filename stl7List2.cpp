#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){
     list<int> mylist(4,2); // Here 4 and 2 means that there are 4 elements and each of their value is 2
     list<int> :: iterator it;

    //  mylist.push_back(10);
    //  mylist.push_front(15);
    //  mylist.push_back(1);
    //  mylist.push_front(13);
    //  mylist.push_back(-1);

    //To print the list in reverse order
    mylist.reverse();

    //To clear the list
    //mylist.clear();

    //Elements number in the list
    cout <<"The number of elements on the list : " << mylist.size() <<endl;

    //This loop for printing the list
     for ( it = mylist.begin() ; it != mylist.end(); it++)
     {
        cout << *it <<endl;
     }
     


    return 0;
}