// #include <iostream>
// using namespace std;
// class Sample
// {
// public:
//     char chr[100]; // Data member
//     int age;
//     void setData() // member function .
//     {
//         cout << "Enter the name : ";
//         cin >> chr;
//         cout << "Enter the age : ";
//         cin >> age;
//     }
//     void getData()
//     {
//         cout << "Name is : " << chr << endl;
//         cout << "Age is : " << age << endl;
//     }
// };
// int main()
// {
//     Sample s1;
//     s1.setData();
//     s1.getData();
//     return 0;
// }

// #include <iostream> // Header for input and output
// using namespace std;
// template<class t1>
// class Sample {
//     public:
//     t1 arr[100];
//     t1 cast[100] ;
//     void setData(t1 x[100], t1 y[100]){
//         arr=x;
//         cast=y;
//     }
//     void getData(){
//         cout<<"Name : "<<arr<<endl;
//         cout<<"Cast : "<<cast<<endl;

//     }
// };
// int main(){
//     Sample<char> s;
//     s.setData("Ronit","Rajput");
//     s.getData();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// namespace custom{
//     void sus(){
//         cout<<"I am a custom namespaace "<<endl;
//     }
// }
// using namespace custom;
// int main(){
//     custom::sus();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <iomanip>
// int main(){
//     float pi=3.1345682;
//     cout<<scientific<<setprecision(4)<<pi<<endl;
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//     cout.setf(ios::left);
//     cout<<setw(3)<<1;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <fstream>
// int main(){
//     ofstream file ;
//     file.open("data100.txt",ios::app);
//     if(file.is_open()){
//         file<<"Hii I am Ronit Kumar Singh "<<endl;
//         file<<"I am a coder "<<endl;
//         file<<"I am coder who is intersted in coding "<<endl;
//         file.close();
//     }
//     else{
//         cerr<<"Error ! Couldn't open the file "<<endl;
//     }
//     return 0;
// }

// primitive data type :-
// #include <iostream>
// using namespace std;

// int main(){
//     int a=100;
//     cout<<a;
//     long s=100;
//     cout<<s;
//     double d=10.09;
//     cout<<d<<endl;
//     float ef=10.10;
//     cout<<ef<<endl;
//     char chr = 'A';
//     cout<<chr;
//     bool fg=true;
//     cout<<fg<<endl;
//     return 0;
// }

// modified data type :-
// #include <iostream>
// using namespace std;

// int main(){
//     long int a = 100 ;
//     cout<<a<<endl;
//     short int d=100;
//     cout<<d<<endl;
//     unsigned int f = 1000 ;
//     cout<<f<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[10];
//     cout<<sizeof(arr)/sizeof(int)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[10]={0};
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     // int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     // cout<<*(arr+1)<<endl;
//     // cout<<*(arr+2)<<endl;
//     // cout<<*(arr+3)<<endl;
//     // cout<<*(arr+4)<<endl;
//     // int arr[2][3]={{1,2,3},{4,5,6}};
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<3;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // int a=10;
//     // int* add=&a;
//     // cout<<add<<endl;
//     // cout<<*add<<endl;
//     // int a=10 ;
//     // int& add=a;
//     // add+=10;
//     // cout<<"a is : "<<a<<endl;
//     // typedef unsigned long long int uint ;
//     // uint gad = 10;
//     // cout<<sizeof(uint);
//     // using uint = unsigned long long int ;
//     // uint age ;
//     // cout<<sizeof(age);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct Person{
//     string name ;
//     int age ;
// };
// int main(){
//     Person p;
//     p.name = "Ronit";
//     p.age=20;
//     cout<<"Name : "<<p.name<<endl;
//     cout<<"Age : "<<p.age<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// enum color{Red=100,Green=12,Yellow=46};
// int main(){
//     color c1 = Red;
//     cout<<"C1 is : "<<c1<<endl;
//     color c2 = Green;
//     cout<<"C2 is : "<<c2<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// enum day{Sunday,Monday,Wednesday,Thursday,Friday,Saturday};
// int main(){
//     day d1 = Sunday ;
//     switch(d1){
//         case Sunday:{
//             cout<<"It's week end , lets party "<<endl;
//             break;
//         }
//         default:{
//             cout<<"It's regular day "<<endl;
//         }
//     }
//     return 0;
// }

// Typedef : user defined data type :-
// #include <iostream>
// using namespace std;

// int main(){
//     typedef unsigned long long int uint ;
//     uint total_balance =100000000;
//     cout<<total_balance;
//     return 0;
// }

// string in c++ :-
// #include <iostream>
// using namespace std;

// int main(){
//     double x=100.08;
//     decltype(x) y;
//     cout<<sizeof(y);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     cout<<max(10,20);
//     return 0;
// }

// call by value :-
// #include <iostream>
// using namespace std;
// void changer(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// int main(){
//     int a=10 ;
//     int b=20;
//     cout<<"Value of a and b before : "<<a<<" and "<<b<<endl;
//     changer(a,b);
//     cout<<"Value of a and b after : "<<a<<" and "<<b<<endl;

//     return 0;
// }
// pass by reference :-
// #include <iostream>
// using namespace std;
// void changer(int& a,int& b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// int main(){
//     int a=10 ;
//     int b=20;
//     cout<<"Value of a and b before : "<<a<<" and "<<b<<endl;
//     changer(a,b);
//     cout<<"Value of a and b after : "<<a<<" and "<<b<<endl;

//     return 0;
// }

// pass by pointer :-
// #include <iostream>
// using namespace std;
// void changer(int* a,int* b){
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;
// }
// int main(){
//     int a=10 ;
//     int b=20;
//     cout<<"Value of a and b before : "<<a<<" and "<<b<<endl;
//     changer(&a,&b);
//     cout<<"Value of a and b after : "<<a<<" and "<<b<<endl;

//     return 0;
// }

// Selection statement :-
// #include <iostream>
// using namespace std;

// int main(){
//     int choice = 1;
//     switch(choice){
//         case 1:{
//             cout<<"First choice"<<endl;
//             break;
//         }
//         case 2:{
//             cout<<"Second choice";
//             break;
//         }
//         default:{
//             cout<<"Not a first or second choice";
//         }
//     }
//     return 0;
// }

// Iteration (looping) statement :-
// for loop :-
// #include <iostream>
// using namespace std;

// int main(){

//     return 0;
// }

// Jump statment :-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i=9;
//     start:
//     i++;
//     cout<<i<<endl;
//     if(i==10){
//         goto start ;
//     }
//     return 0;
// }

// default constructor :-
// #include <iostream>
// using namespace std;
// class Sample{
//     public:
//         Sample(){
//             cout<<"I am a default constructor "<<endl;
//         }
// };
// int main(){
//     Sample car;  
//     return 0;
// }

// parameterized constructor :-
// #include <iostream>
// using namespace std;
// class Sample{
//     public:
//     Sample(int a,int b){
//         cout<<"I am a parameterized constructor "<<endl;
//     }
// };
// int main(){
//     Sample car(10,20);  
//     return 0;
// }

// copy constructor :-
// #include <iostream>
// using namespace std;
// class Sample{
//     public:
//     int a;int b;
//     Sample(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
//     // Sample(Sample& obj){
//     //     this->a=obj.a;
//     //     this->b=obj.b;
//     // }
// };
// int main(){
//     Sample car(10,20);
//     cout<<car.a<<" "<<car.b<<endl;
//     Sample jar(car); //Sample jar=car;
//     cout<<jar.a<<" "<<jar.b<<endl;
//     return 0;
// }

// constructor overloading :-
// #include <iostream>
// using namespace std;
// class Sample {
//     public:
//     Sample(int a,int b){
//         cout<<"I am first constructor"<<endl;
//     }
//     Sample(int a,float b,int c){
//         cout<<"I am second constructor"<<endl;
//     }
// };
// int main(){
//     Sample car(10,30.09,20);  
//     return 0;
// }

// // delegating constructor :-
// #include <iostream>
// using namespace std;
// class Sample{
//     public:
//         Sample(int a,int b){
//             cout<<"I am constructor with two parameters "<<endl;
//         }
//         Sample(int a,int b,int c):Sample(10,20){
//             cout<<"I am constructor with two parameters "<<endl;
            
//         }
// };
// int main(){
//     Sample car(10,20,230);
//     return 0;
// }

// // Destructor :-
// #include <iostream>
// using namespace std;
// class Sample{
//     public:
//         ~Sample(){
//             cout<<"I am destructor"<<endl;
//         }
// };
// int main(){
//     {
//         Sample car;
//     }  
//     cout<<"Hello world "<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Sample{
//     private:
//         int passkey ;
//     public:
//         friend void setPasskey(Sample& obj,int x);
//         friend void getPasskey(Sample& obj);
// };
// void setPasskey(Sample& obj,int x){
//     obj.passkey = x;
// }
// void getPasskey(Sample& obj){
//     cout<<"PassKey : "<<obj.passkey<<endl;
// }
// int main(){
//     Sample s;
//     setPasskey(s,10034);
//     getPasskey(s);
//     return 0;
// }

// Friend function is not a memeber function , its a normal function which has access to the private data member of the class . 

// #include <iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//         Complex(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//         void getData(){
//             cout<<a<<"+"<<b<<"i"<<endl;
//         }
//         friend void sum(Complex o1,Complex o2);
// };
// void sum(Complex o1,Complex o2){
//         cout<<(o1.a+o2.a)<<"+"<<(o1.b+o2.b)<<"i"<<endl;
// }
// int main(){
//     Complex o1(10,21);
//     o1.getData();
//     Complex o2(2,5);
//     o2.getData();
//     sum(o1,o2);
//     return 0;
// }

// Operator overloading :-
// #include <iostream>
// using namespace std;
// class Student{
//     public:
//         int maths, science ;
//         Student(int a,int n){
//             maths=a;
//             science=n;
//         }
//         Student operator +(Student obj){
//             return Student(maths+obj.maths,science+obj.science);
//         }
//         void getData(){
//             cout<<"Maths : "<<maths<<endl<<"Science : "<<science<<endl;
//         }
// };
// int main(){
//     Student s1(10,20);
//     Student s2(40,50);
//     Student s3=s1+s2;
//     s3.getData();
//     return 0;
// }

/* 
Types of inheritance :-
1. single inheritance : one base , one derived class 
2. Multiple inheritance : more than one base class , one derived class 
3. Multilevel : A class inherits from another derived class 
4. Hierarchical : one base class , multiple derived class 
5. Hybrid : mixture .
*/

// // Multiple inheritance :-
// #include <iostream>
// using namespace std;
// class base1{
//     public:
//     int x1;
//     base1(int a){
//         cout<<"I am constructor of base class 1"<<endl;
//     }
//     void getData1(){
//         cout<<"Base 1 : "<<x1<<endl; 
//     }
// };
// class base2{
//     public:
//     int x2;
//     base2(int a){
//         cout<<"I am constructor of base class 2"<<endl;
//     }
//     void getData1(){
//         cout<<"Base 2 : "<<x2<<endl; 
//     }
// };
// class derived : public base1,public base2 {
//     public:
//         derived(int a,int b,int c):base2(a),base1(b){
//             cout<<"I am constructor of the derived class "<<endl;
//         }
// };
// int main(){
//     derived obj(10,20,30);
//     return 0;
// }

// Multilevel inheritance :-

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     base(int a){
//         cout<<"I am constructor of Base class "<<endl;
//     }
// };
// class superbase:public base{
//     public:
//     superbase(int a,int b):base(a){
//         cout<<"I am constructor of super base class "<<endl;
//     }
// };
// class derived:public superbase{
//     public:
//     derived(int a,int b,int c):superbase(b,c){
//         cout<<"I am constructor of derived class "<<endl;
//     }
// };
// int main(){
//     derived obj(10,20,30);  
//     return 0;
// }

// // Hierachical inheritance :-
// #include <iostream>
// using namespace std;
// class base{
//     public:
//         base(int a){
//             cout<<"I am a constructor of base class "<<endl;
//         }
// };
// class derived1:public base{
//     public:
//         derived1(int a,int b):base(a){
//             cout<<"I am constructor of derived class 1 "<<endl;
//         }
// };
// class derived2:public base{
//     public:
//         derived2(int a,int b):base(a){
//             cout<<"I am a constructor of derived class 2"<<endl;
//         }
// };
// int main(){
    
//     return 0;
// }

// // constructor in inheritance :-
// #include <iostream>
// using namespace std;
// class base{
//     base(){
//         cout<<"I am a constructor of base class"<<endl;
//     }
// };
// class derived{
//     derived(){
//         cout<<"I am a constructor of derived class "<<endl;
//     }
// };
// class Complex{
//     int a,b;
//     public:
//     Complex(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
//     void multiplication(Complex obj){
//         cout<<"Result : "<<(obj.a*a-obj.b*b)<<"+"<<(obj.a*b+obj.b*a)<<"i"<<endl;
//     }
// };
// int main(){
//     Complex c1(2,3);
//     Complex c2(4,5);
//     c2.multiplication(c1);
//     return 0;
// }

// // Ambiguity in inheritance :-
// #include <iostream>
// using namespace std;
// class base{
//     public:
//         void show(){
//             cout<<"I am show of the base class "<<endl;
//         }
// };
// class derived1:virtual public base{
//     public:
//     derived1(){
//         cout<<"I am derived class 1"<<endl;
//     }
// };
// class derived2:virtual public base{
//     public:
//     derived2(){
//         cout<<"I am derived class 2"<<endl;
//     }
// };
// class superderived:public derived1,public derived2{
//     public:
//     superderived(){
//         cout<<"I am superderived class"<<endl;
//     }
// };
// int main(){
//     superderived obj;
//     obj.show();  
//     return 0;
// }

// Exception Handling :-
// #include <iostream>
// using namespace std;

// int main(){
//     try{
//         int numerator = 10;
//         int denominator = 0;
//         if(denominator==0){
//             throw logic_error("Number cannot be divisible by zero ....");
//         }
//         int result = numerator/denominator;
//         cout<<"Result : "<<result<<endl;
//     }
//     catch(const exception & e){
//         cout<<e.what()<<endl;
//     }
//     return 0;
// }

// // function template :-
// #include <iostream>
// using namespace std;
// template <class T>
// T sum(T a,T b){
//     T result ;
//     result = a+b ;
//     return result;
// }
// int main(){
//     cout<<sum(10.09,90.09);
//     return 0;
// }

// // Class template :-
// #include <iostream>
// using namespace std;
// template <class t1,class t2>
// class Sample{
//     public:
//     t1 a;
//     t2 b;
//     Sample(t1 x,t2 y){
//         a=x;
//         b=y;
//     }
//     void getData(){
//         cout<<"Size of t1 : "<<sizeof(t1)<<endl;
//         cout<<"Size of t2 : "<<sizeof(t2)<<endl;
//     }
// };
// int main(){
//     Sample<int,double> s(10,20.09);
//     s.getData();
//     return 0;
// }

// // Template in inheritance :-
// #include <iostream>
// using namespace std;
// template <class t>
// class Base{
//     public:
//         t value ;
//         Base(t val):value(val){}
//         void show(){
//             cout<<"I am show method of the base class "<<endl;
//         }
// };
// template <class t1,class t2>
// class Derived:public Base<t2>{
//     public: 
//     t1 value2;
//     Derived(t1 val):Base<t2>(val) {
//         value2=val;
//     }
// };
// int main(){
//     Derived<int,double> obj(10);
//     obj.show();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include <iterator>

// int main(){
    
//     // vector<int> vec={1,2,3,4,5};
//     // vector<int>::iterator iter;
//     // iter=vec.begin();

//     // for(iter = vec.begin();iter<vec.end();iter++){
//     //     cout<<*iter<<" ";
//     // }

//     // advance(iter,3);
//     // cout<<*iter<<endl;

//     // auto a = next(iter,3);
//     // a = prev(iter,3);
//     // cout<<*a<<endl;

//     // vector<int> vect={10,11,12};
//     // copy(vec.begin(),vec.end(),inserter(vect,vect.end()));
//     // for(int x:vect){
//     //     cout<<x<<" ";
//     // }

//     // vector<int> vec={1,2,3,4,5};
//     // vector<int>::iterator iter = vec.begin();
//     // for(iter;iter<vec.end();iter++){
//     //     cout<<*iter<<" ";
//     // }

//     // vector<int> vec(10,1);
//     // for(int i:vec){
//     //     cout<<i<<" ";
//     // }

//     // vector<int> vec1(5,11);
//     // vector<int> vec2(vec1);
//     // for(int x:vec2){
//     //     cout<<x<<" ";
//     // }


//     return 0;
// }

// List :-
// #include <iostream>
// using namespace std;
// #include <list>
// int main(){
//     list<int> lst={1,2,3,4,5,6};
//     for(int x:lst){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include <list>

// int main(){
//     list<int> lst={1,2,3,4,5};
//     vector<int> vec={10,11,12,13,14};
//     // cout<<vec.front();
//     // cout<<lst.front();

//     // cout<<vec.back();
//     // cout<<lst.back();

//     // vec.push_back(10);
//     // lst.push_front(10);

//     // vec.pop_back();
//     // lst.pop_front();

//     // cout<<vec.size();
//     // cout<<lst.size();



//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <stack>

// int main(){
//     stack<int> mystack;
//     // cout<<mystack.empty();
//     mystack.push(1);
//     mystack.push(2);
//     mystack.push(3);
//     mystack.push(4);
//     while(!mystack.empty()){
//         cout<<mystack.top()<<" ";
//         mystack.pop();
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <map>

// int main(){
//     map<int,string> mp;
//     // cout<<mp.size();

//     // cout<<mp.max_size();

//     // cout<<mp.empty()<<endl;

//     mp.insert({101,"Ronit"});
//     // map<int,string>::iterator iter =mp.begin();
//     // mp.erase(iter);

//     // mp.erase(101);
//     // mp.clear();

//     for(auto it:mp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
//     return 0;
// }

// // file writting :-
// #include <iostream>
// using namespace std;
// #include <fstream>

// int main(){
//     ofstream obj;
//     obj.open("data01.txt");
//     obj<<"Hii I am ronit kumar singh"<<endl;
//     obj<<"Hii I am student from vit bhopal "<<endl;
//     obj.close();    
//     return 0;
// }

// // Reading from a file :-
// #include <iostream>
// using namespace std;
// #include <fstream>
// int main(){
//     ifstream obj ;
//     obj.open("data01.txt");
//     char ch ;
//     obj>>ch;
//     while(!obj.eof()){
//         cout<<ch;
//         obj>>ch;
//     }
//     obj.close();
//     return 0;
// }

// // Reading binary files :-
// #include <iostream>
// using namespace std;
// #include <fstream>
// int main(){
//     ifstream obj;
//     char chr ;
//     obj.open("data01.txt",ios::binary);
//     chr=obj.get();
//     while(!obj.eof()){
//         cout<<chr;
//         chr = obj.get();
//     }
//     obj.close();
//     return 0;
// }

// // Sequential access file :-
// #include <iostream>
// using namespace std;
// #include <fstream>
// int main(){
//     ifstream obj;
//     obj.open("data01.txt");
//     if(obj.is_open()){
//         string line ;
//         while(getline(obj,line)){
//             cout<<line<<endl;
//         }
//     }
//     obj.close();
//     return 0;
// }