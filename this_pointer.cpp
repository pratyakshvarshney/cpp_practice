#include <iostream>
using namespace std;

class shape{
    int length;
    int breadth;
    public: 
    void area(int length ,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    void display() const{
        cout<<"length : "<<length<<" & breadth : "<<breadth<<endl;
        cout<<"area : "<<length*breadth;
    }
};

int main() {
    shape s;
    s.area(10,15);
    s.display();

    return 0;
}
