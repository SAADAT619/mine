#include<iostream>
/*
There are other pre define macros. They are:
__LINE__
__FILE__
__DATE__
__TIME__
__STDC__
__cplusplus

*/
using namespace std;

int main(){
    cout << "Current Line is : " << __LINE__ << endl;
    cout << "Current File is : " << __FILE__ << endl;
    cout << "Current Date is : " << __DATE__ << endl;
    cout << "Current Time is : " << __TIME__ << endl;
    cout << "Current Standard c++ code  is : " << __STDC__ << endl;
    cout << " Standard c++ confirming code  is : " << __cplusplus << endl;

    //we can change the value of the line macro 
    #line 1000 "Saadat.txt"
    cout << "Current the new line is " << __LINE__ <<endl;
    cout << "Current the new file is " << __FILE__ <<endl;

    return 0;
}