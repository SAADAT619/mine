#include<iostream>
#define WINDOWS 1
#define LINUX 2
#define MAC 3

#define OS MAC

using namespace std;

int main(){
    #if OS == WINDOWS
    cout << "we are using window";
    #endif
    cout << "Nothing so much";
    return 0;
}