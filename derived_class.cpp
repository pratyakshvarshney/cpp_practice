#include <iostream>
using namespace std;

class vehicle{
    public:
    virtual void move() const {
        
    }
};

class car : public vehicle{
    public:
    void move() const override{
        cout<<"Car started \n";
    }
};

class bicycle : public vehicle{
    public:
    void move() const override{
        cout<<"bicycle started \n";
    }
};

int main() {
    vehicle *c = new car();
    vehicle *b = new bicycle();
    
    c->move();
    b->move();
    
    delete c;
    delete b;

    return 0;
}
