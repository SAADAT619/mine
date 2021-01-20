#include<iostream>
#include<fstream>
using namespace std;

int main(){
    /*
    format//
    try{protected code}
    catch(ExceptionName e1){
        catch block
    }

    catch(ExceptionName e2){
        catch block
    }
    */
    //create and open a text file 
    ofstream MyFile("filename.txt");

    //write to the file
    MyFile << "files can be tricky, but it is fun enough";

    //close the file
    MyFile.close();

    //create a text string, which is used to output the text file
    string myText;

    //Read from the text file 
    ifstream MyReadFile("filename.txt");

    //use a while loop together with the getline() function to the read the file line by line
    while (getline (MyReadFile, myText)){
        //output the text from the file
        cout<<myText;
    }

    //close the file
    MyReadFile.close();

    return 0;
}