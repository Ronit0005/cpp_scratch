#include <iostream>
using namespace std;
#include <fstream>

int main(){
    // ofstream out;
    // out.open("file2.txt");
    // out<<"I am Ronit ";
    // out.close();

    ifstream in;
    in.open("file2.txt");
    string s1,s2,s3;
    // in>>s1>>s2>>s3;
    // cout<<s1<<endl<<s2<<endl<<s3<<endl;
    while(in.eof()==0){
        getline(in,s1);
        cout<<s1<<" ";
    }
    return 0;
}