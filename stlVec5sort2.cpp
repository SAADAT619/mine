#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar[5] = {5,3,2,6,8};

    //sort(ar, ar+5); //it will sort to index 4 not 5 mane sob somoe ager index porjonto sort korbe

    //if I want to start sorting from number 2 index
    sort(ar+2, ar+5);
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] <<endl;
    }
    
    return 0;
}