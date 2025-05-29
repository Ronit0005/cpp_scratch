#include <iostream>
using namespace std;
#include <vector>
// We cannot resize an array in c++ .
// use vector when we want resizable array .
int main(){
    // vector<int> vec1;
    // vector<int> vec1(3);
    // vector<int> vec2(vec1);
    vector<int> vec1(10,3);
    for(int i=0;i<4;i++){
        int a;
        vec1.push_back(i);
    }
    for(int i=0;i<2;i++){
        vec1.pop_back();
    }
    vector<int> ::iterator iter = vec1.end();
    vec1.insert(iter,10,200);
    for(int i=0;i<vec1.size();i++){
        cout<<vec1.at(i)<<" "<<endl;
    }
    cout<<"Size : "<<vec1.size()<<endl;
    cout<<"Front : "<<vec1.front()<<endl;
    cout<<"End : "<<vec1.back()<<endl;
    return 0;
}