#include<iostream>
using namespace std;

//first names space
namespace first_space{
    void func(){
        cout << "Inside the first space" <<endl; 
    }
}

//second name space
namespace second_space{
    void func(){
    cout << "Inside the second space" <<endl;
}
}


int main(){
    
    //Calls function from first name space
    first_space :: func();

    //Calls function from second name space
    second_space :: func();

    return 0;
}