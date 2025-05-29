#include <iostream>
using namespace std;
#include <fstream>
/* Usefull classes for working with files in c++ :-
1. fstreambase -> Base  
2. ifstream -> Derived
3. ofstream -> Derived 
In order to work if file :- 
1. Open the file 
    1.1 using constructor 
    1.2 using the member function open() of the class 
*/
int main(){
    // Opening file using the constructor .
    // string str = "I am a person with high iq ";
    // ofstream out("file.txt");
    // out<<str;
    // Opening a file and reading it .
    string st;
    ifstream in("file.txt");
    // in>>st;
    getline(in,st);
    cout<<st;
    return 0;
}