#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<int> vec;
    cout<<"Enter the size of vector : ";
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        vec.push_back(i);
    }
    vector<int> ::iterator iter = vec.begin();
    vec.insert(iter+5,100);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<vec.front();
    cout<<endl<<vec.back();
    return 0;
}