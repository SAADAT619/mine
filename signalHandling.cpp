#include<iostream>
#include<csignal>
using namespace std;

void signalHandler(int signum){
    cout << "Interrupt signal (" << signum << ") received";
     //cleanup and close up staff here
     //terminate programme
    exit(signum);
}

int main(){
    
    int i = 0;
    //register signal SIGINT and signal handler
    signal(SIGINT , signalHandler);

    while(1){
        cout << "Going to sleep......" <<endl;
        _sleep(1);
    }
     
    return 0;
}