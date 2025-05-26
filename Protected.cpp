#include <iostream>
using namespace std;
/* The scope of the inherited variable in different derivation .


            Public Derivation       Private Derivation      Protected Derivation.

Public      public                  private                 protected
Private     No inheritance          no inheritance          no inheritance 
Protected   protected               private                 protected 
                
*/


class Base{
    public:
        int a;
    private:
        int b;
    protected:
        int c;
};
class Derived:protected Base{
    public:
        Derived(){
        cout<<c<<endl;
    }
};
int main(){
    Derived dr;
    // cout<<dr.a<<endl;
    // cout<<dr.b;
    // cout<<dr.c;
    // cout<<dr.a;
    // cout<<dr.a;
    return 0;
}