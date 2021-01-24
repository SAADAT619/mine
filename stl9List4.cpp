#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    int ar[5] = {5, 6, 4, 2, 7};

    list<int>mylist(ar, ar+5);
    list<int> :: iterator it;

    // it = find(mylist.begin(), mylist.end(), 22);  //this will find that 22 is in the list or not
    // if (it == mylist.end())
    // {
    //     cout << "Not found" <<endl;
    // }
    // else{
    //     cout << "Found" <<endl;
    // }


    // it = mylist.begin(); //This indicate the first element of the array
    //mylist.erase(it); //This will remove the first eleement 

    //This wiil point to the element 1
    it = find(mylist.begin(), mylist.end(), 4);
    mylist.erase(it);

    //this loop for print the list
    for ( it = mylist.begin(); it !=mylist.end(); it++)
    {
        cout << *it <<"\t";
    }
    cout << "\n";
    
    return 0;
}