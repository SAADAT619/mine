#include<iostream>
using namespace std;

int main(){
    double* pvalue = NULL; //pointer initiallize with null
    pvalue = new double;   //Request memory for the variable

    *pvalue = 4564.16;    //Store value at allocated memory
    cout<< "Value of the pvalue :" <<endl; 

    delete pvalue;
    return 0;
}