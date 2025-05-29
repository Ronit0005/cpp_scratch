#include <iostream>
using namespace std;
// Pure Virtual Function : Is a function made to be redefined in the derived class .
// Class containing : One or more abstarct class , they are classes be assisted .
// We cannot made a object of abstract class .
class Code_With_Harry{
    protected:
        string title;
        float rating ;
    public:
        Code_With_Harry(string s,float r){
            rating = r;
            title=s;
        }
        virtual void display()=0;
};
class Video:public Code_With_Harry{
    int videoLength;
    public:
        Video(string s,float r,int l):Code_With_Harry(s,r){
            videoLength=l;
        }
        void display(){
            cout<<"This is a amazing video with title : "<<title<<endl;;
            cout<<"Rating : "<<rating<<endl;
        }
    };
    class Text:public Code_With_Harry{
        int words;
        public:
        Text(string s,float r ,int w):Code_With_Harry(s,r){
            words=w;
        }
        void display(){
            cout<<"This is a amazing video with title : "<<title<<endl;;
            cout<<"Rating : "<<rating<<endl;
            cout<<"Number of words : "<<words<<" words"<<endl;
        }
};
int main(){
    Code_With_Harry* ptr ;
    Video obj("Ronit",5,10.03);
    ptr = &obj;
    ptr->display();
    return 0;
}