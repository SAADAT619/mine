#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar[5] = {5,3,2,6,8};

    sort(ar, ar+5); //it will sort to index 4 not 5
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] <<endl;
    }
    
    return 0;
}