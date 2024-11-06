#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    
    public:
        Rectangle(int l,int b){
            length=l;
            breadth=b;
        }
        void area(){
            cout<<"Area of rectangle is : "<<length*breadth<<endl;
        }
        void perimeter(){
            cout<<"Perimeter of Rectangle is : "<<2*(length+breadth)<<endl;
        }
};

int main(){
    Rectangle r(10,20);
    r.area();
    r.perimeter();
    return 0;
}
