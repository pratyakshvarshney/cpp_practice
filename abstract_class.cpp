#include <iostream>
using namespace std;

class shape{
    public: 
    virtual void draw() const = 0;
};

class circle : public shape {
    public: 
    void draw() const override{
        cout<<"drawing circle \n";
    }
};

class square : public shape {
    public: 
    void draw() const override{
        cout<<"drawing square \n";
    }
};

int main() {
    shape *s1=new circle();
    shape *s2=new square();
    
    s1->draw();
    s2->draw();
    
    delete s1;
    delete s2;
    return 0;
}
