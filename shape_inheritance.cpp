#include<iostream>
using namespace std;

class shape{
    public:
        virtual void draw(){
            cout<<"Shape \n";
        }
};

class circle : public shape {
    public:
        void draw() override{
            cout<<"Circle \n";
        }
};

class rectangle : public shape {
    public:
        void draw() override{
            cout<<"Rectangle \n";
        }
};

int main(){
    shape s;
    circle c;
    rectangle r;
    s.draw();
    c.draw();
    r.draw();
    return 0;
}
