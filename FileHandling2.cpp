#include <iostream>
using namespace std;
#include <fstream>
int main(){
    int choice ;
    cout<<"Enter 1 to write to the file \nEnter 0 to read the file content "<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            ofstream out("file2.txt");
            cout<<endl<<"Enter the content of the file "<<endl;
            string str;
            cin>>str;
            // cout<<str;
            out<<"My name : "+str;
            out.close();
            break;
        }
        case 0:{
            ifstream in("file2.txt");
            string str;
            getline(in,str);
            cout<<str<<endl;
            in.close();
            break;
        }
        default:{
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}