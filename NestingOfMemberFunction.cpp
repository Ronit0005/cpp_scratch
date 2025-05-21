#include <iostream>
using namespace std;
class Binary{
    string s;
    public:
    void read();
    bool chk_bny();
    void display();
};
void Binary::read(){
    cout<<"Enter the binary number : ";
    cin>>s;
    cout<<"\n";
}
bool Binary::chk_bny(){
    for(int i=0;(i<s.length());i++){
        if(s.at(i)!='0'&& s.at(i)!='1'){
            return false;
        }
        return true;
    }
}
void Binary::display(){
    cout<<"\nThe binary number is : "<<s;
}
int main(){
    Binary num;
    num.read();
    cout<<num.chk_bny();
    num.display();
    return 0;
}