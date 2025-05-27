#include <iostream>
using namespace std;
class Shop{
    int id;
    float price ;
    public:
        void setData(int a,int b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"Id : "<<id<<endl;
            cout<<"Price : "<<price<<endl;
        }
};
int main(){
    int size;
    cout<<"Enter the size of the items \n";
    cin>>size;
    int p,q;
    Shop* ptr = new Shop[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the id and price for item "<<i+1<<endl;
        cin>>p>>q;
        (ptr+i)->setData(p,q);
    }
    for(int i=0;i<size;i++){
        cout<<"The Item Number : "<<i+1<<endl;
        (ptr+i)->getData();
    }

    return 0;
}