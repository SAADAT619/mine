#include<fstream>
#include<iostream>
using namespace std;

int main(){
      char data[100];

      //opne file in a wite mode
      ofstream outfile;
      outfile.open("afile.dat");

      cout<<"Writing to the file"<<endl;
      cout<<"Enter your name";
      cin.getline(data,100);

        //write inputted data into the file 
        outfile<<data<<endl;

        cout<<"Enter your age";
        cin>>data;
        cin.ignore();

        //close the opened file
        outfile.close();

        //open file in a read mode
        ifstream infile; 
        infile.open("afile.dat");

        cout<<"Reading from the file"<<endl;
        infile>>data;

        //write data at the screen
        cout<<data<<endl;

        //read the data from the file and display it
        infile >> data;
        cout << data <<endl;

        //close the opened file
        infile.close();
    return 0;
}