#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <double> vec1;
    vector <double> :: iterator it2;
    it2 = vec1.begin();

    //This loop for push back the elements in the vector
    for (int i = 0; i <= 5; i++)
    {
        vec1.push_back(i);
    }

    //This loop for declare the size of the vector
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1.size() <<endl;
    }
    
    //This loop to declare the pointer of the vector
    for (it2=vec1.begin() ; it2 !=vec1.end(); it2++)
    {
        cout << *it2 <<endl; 
    }
    //----------------------------------------------------------------
    //----------------------------------------------------------------
    
    
   
    vector<char> vec3;
    vector<char> :: iterator it3;
    it3 = vec3.begin();

    //This loop for push back the elements of the vector
    for (int i = 0; i <= 5; i++)
    {
        vec3.push_back(i);
    }

    //This loop for declare the size of the vector
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3.size() <<endl;
    }

    //This loop to decalare the pointer
    for (it3 = vec3.begin(); it3 !=vec3.end(); it3++)
    {
        cout << *it3 <<endl;
    }
    
    
    
    
    
    return 0;
}