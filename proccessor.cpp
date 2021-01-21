#include<iostream>
using namespace std;
/*
The #define preprocessor directive creates symbolic constants. The symbolic constant is called a macro
*/
#define MIN(a,b) (((a)<(b)) ? a : b)
int main(){
    int i,j;

    i=100;
    j=200;

    cout << "Minimum value is : " << MIN(i,j) <<endl;
    return 0;
}