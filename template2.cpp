#include<iostream>
using namespace std;

template <class myTemplate>
myTemplate add(myTemplate a, myTemplate b){
    return a+b;
}

int main(){
    cout<< add(110,20)<<endl;
    cout<< add(100.23,5.3) <<endl; 
    return 0;
}