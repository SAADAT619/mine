#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    int ar[5] = {4,6,3,2,9};
    list<int> mylist(ar, ar+5);
    list<int> :: iterator it;



    // //use of empty function 
    // if (mylist.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else{
    //     cout << "FILLED" << endl;
    // }

    
    
    
    // cout << mylist.front() << endl;   //it wiil print the first operator of the array
    // cout << mylist.back() << endl;    //it will print the last operator of the array

    
    
 
    mylist.pop_front(); //This will remove the first element
    mylist.pop_back();  //This will remove the last element
    mylist.pop_front(); // This will remove the second first element 
    mylist.pop_back();  // This will remove the second last element
    
    
    
    
    
    
    //This loop is for print the list
    for ( it = mylist.begin(); it !=mylist.end(); it++)
    {
        cout << *it << endl;
    }
    

    return 0;
}