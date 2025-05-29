#include <iostream>
using namespace std;
template <class T>
class Vector{
    public:
        T size;
        T* arr;
        Vector(int size){
            this->size=size;
            arr=new T[size];
        }
        int dotProduct(Vector& vec){
            T dot=0;
            for(int i=0;i<size;i++){
                dot+=vec.arr[i]*arr[i];
            }
            return dot;
        }
};
int main(){
    Vector<float> vec(3);
    vec.arr[1]=1.0;
    vec.arr[2]=3.4;
    vec.arr[0]=4.2;
    Vector<float> vect(3);
    vect.arr[1]=1.7;
    vect.arr[2]=6.1;
    vect.arr[0]=2.0;
    cout<<vect.dotProduct(vec);
    return 0;
}