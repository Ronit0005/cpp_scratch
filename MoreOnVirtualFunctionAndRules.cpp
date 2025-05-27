#include <iostream>
using namespace std;
#include <cstring>
class Code_With_Harry{
    protected:
        string title;
        float rating ;
    public:
        Code_With_Harry(string s,float r){
            rating = r;
            title=s;
        }
         void display(){
            cout<<"Bogus Code "<<endl;
        }
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
    string title="Django tutorial";
    float rating , vlen;
    int words ;
    vlen=10.01;
    words=9753;
    rating= 5;
    Video djangovideo(title,rating,vlen);
    // djangovideo.display();
    Text djangotext(title,rating,words);
    // djangotext.display();
    Code_With_Harry* tut[2];
    tut[0]=&djangotext;
    tut[1]=&djangovideo;
    tut[1]->display();
    tut[0]->display();
    return 0;
}