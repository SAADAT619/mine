#include<iostream>
#include<stack>
using namespace std;

int main(){
     stack<string> s;


    s.push("dipto");
    s.push("nabil");
    s.push("arnob"); //Here arnob will be on top but after s.pop() nabil will be on top


    //To erase the top element
    // s.pop();



    //To see the top element of the stack
    // cout << s.top() << endl;

    //Top print the full stack
    while(!s.empty()){  // Here s.empty() means that joto khon na loop ta empty hoi totokh eta cholbe
        string x;
        x = s.top();
        cout << x << endl;
        s.pop();
    }



    return 0;
}