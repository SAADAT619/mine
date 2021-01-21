#include<iostream>
#define ANIL 2
using namespace std;

int main(){
    #ifdef ANIL
    cout << "Hey Anil";
    #else
    cout << "Who are you ?";
    #endif
    return 0;
}