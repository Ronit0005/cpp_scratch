#include <iostream>
using namespace std;
#include <string>
#include <map>
// map is usde to store key value pair .
// map is a associative container 
int main(){
    map<string,int> marksMap;
    marksMap["Ronit"]=98;
    marksMap["Jack"]=90;
    marksMap["Rohan"]=8;
    map<string,int> ::iterator iter;
    marksMap.insert({"Ron",89});
    for(iter = marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<' '<<(*iter).second<<endl;
    }
    cout<<"Size : "<<marksMap.size()<<endl;
    return 0;
}