#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    priority_queue<int> q; //This queue is for int values

    q.push(1400);
    q.push(100);
    q.push(12);
    q.push(1700);


    //To print the prioeity queue
    while(!q.empty()){
        int x; 
        x = q.top();
        cout << x << endl;
        q.pop();
    }


    // priority_queue<string>q; //This queue is for string values
    // q.push("navid");
    // q.push("karim");
    // q.push("reza");
    // q.push("alim");

    // while(!q.empty()){  //To print the string 
    //     string x;
    //     x = q.top();
    //     cout << x << endl; 
    //     q.pop();
    // }








    return 0;
}