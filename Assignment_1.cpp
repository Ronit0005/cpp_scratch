#include <iostream>
using namespace std;
#include<math.h>
class Point{
    int x,y;
    friend float distance(Point,Point);
    public:
        Point(int,int);
        void display(){
            cout<<"Point("<<x<<","<<y<<")"<<endl;
        }
};
Point::Point(int a,int b){
    x=a;
    y=b;
}
float distance(Point o1,Point o2){
    int xDis=o1.x-o2.x;
    if(xDis<0){
        xDis=-xDis;
    }
    int yDis=o1.y-o2.y;
    if(yDis<0){
        yDis=-yDis;
    }
    return sqrt((xDis*xDis)+(yDis*yDis));
}
int main(){
    Point p1(4,2);
    Point p2(3,4);
    p1.display();
    p2.display();
    cout<<"Distance Between Them : "<<distance(p1,p2);
    return 0;
}