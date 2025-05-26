#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void setRoll_number(int num){
            roll_number=num;
        }
        void getRoll_number(){
            cout<<"Roll Number "<< roll_number<<endl;;
        }
};
class Test:virtual public Student{
    protected:
        float maths,science ;
    public:
        void setMarks(float m1,float m2){
            maths=m1;
            science=m2;
        }
        void getMarks(){
            cout<<"Maths : "<<maths<<endl;
            cout<<"Science : "<<science<<endl;
        }
    };
    
    class Sport:virtual public Student{
        protected:
        float score ;
        public:
        void setScore(float m){
            score=m;
        }
        void getScore(){
            cout<<"Your score is : "<<score<<endl;
        }
    };
    
    class Result:public Sport,public Test{
        float total;
        public:
        void display(){
            cout<<"Maths : "<<maths<<endl;
            cout<<"Science : "<<science<<endl;
            cout<<"Your score is : "<<score<<endl;
            cout<<"Total : "<<((maths+science)/2+score)/2<<endl;
        }
};
int main(){
    Result ronit;
    ronit.setRoll_number(101);
    ronit.setMarks(90.0,92.0);
    ronit.setScore(98);
    ronit.display();
    return 0;
}