#include <iostream>
using namespace std;
// Destructor neither takes a value neither returns a value .
int count=0;
class Num{
    public:
    Num(){
        count++;
        cout<<"This is time when my constructor is called for object number  "<<count<<endl;
    }
    ~Num(){
        cout<<"This is time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside main function "<<endl;
    cout<<"Creating the first object"<<endl;
    Num n1;
    {
        cout<<"Creating two more object"<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to the main"<<endl;
    return 0;
}