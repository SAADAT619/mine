#include<iostream>

#define ANIL 1

using namespace std;

int main(){
    
    #ifdef ANIL
    cout << "Hey ANil";
    #endif

    #undef ANIL

    #ifdef ANIL
    cout << 'Hey Anil';
    #endif

    return 0;
}