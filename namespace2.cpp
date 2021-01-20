#include<iostream>
using namespace std;

//first name space
namespace first_space{
    void func(){
        cout<< "Inside first_space" <<endl;
    }
    //second name space
    namespace second_space{
        void func(){
            cout<< "Inside second_space" <<endl;
        }
    }
}
using namespace first_space :: second_space;
int main(){
    
    //This call function from the second name space
    func();

    return 0;
}