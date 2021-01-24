#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int ar[5] = {5, 2, 1, 6, 3};

    list<int> mylist(ar, ar+5);
    list<int> :: iterator it;

    // it = mylist.begin(); //This will point to the first element of the array
    // it++;

    

    // //To print the it iterator element
    // cout << *it << endl;

    //Use of find function
    it = find(mylist.begin(), mylist.end(), 6); //Here find function will start from mylist first element and it will search til the element of 6
    
    //print this find function
    cout << *it << endl;

    //To insert any element in the array
    mylist.insert(it, 7);

    //This loop for print the list
    for (it  = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
    
    return 0;
}