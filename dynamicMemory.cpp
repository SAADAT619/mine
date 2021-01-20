#include<iostream>
using namespace std;

class Box{
    public:
      Box(){
          cout<< "Constructor called" <<endl;
      }
      ~Box(){
          cout<< "Destructor called" <<endl;
      }
};

int main(){
    // double* pvalue = NULL; //pointer initiallize with null
    // pvalue = new double;   //Request memory for the variable

    // *pvalue = 4564.16;    //Store value at allocated memory
    // cout<< "Value of the pvalue :" <<endl; 

    // delete pvalue;  //free up the memory 

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; //delete array
    return 0;
}