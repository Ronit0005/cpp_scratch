#include <iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        BankDeposit(){}
        BankDeposit(int p,int yr,float rate);
        BankDeposit(int p,int yr,int rate); 
        void show();
};
BankDeposit::BankDeposit(int p,int yr,float rate){
    principal=p;
    years=yr;
    interestRate=rate;
    returnValue=principal;
    for(int i=0;i<yr;i++){
        returnValue*=(1+rate);
    }
}
BankDeposit::BankDeposit(int p,int yr,int rate){
    principal=p;
    years=yr;
    interestRate=float(rate)/100.0;
    returnValue=principal;
    for(int i=0;i<yr;i++){
        returnValue*=(1+interestRate);
    }
}
void BankDeposit::show(){
    cout<<"Principal : "<<principal<<endl;
    cout<<"Return after "<<years<<" years "<<" is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,R,yr;
    float r;
    cout<<"Enter the value of p , t and rate "<<endl;
    cin>>p>>yr>>r;
    bd1=BankDeposit(p,yr,r);
    bd1.show();

    cout<<"Enter the value of p , t and rate "<<endl;
    cin>>p>>yr>>R;
    bd2=BankDeposit(p,yr,R);
    bd2.show();
    return 0;
}