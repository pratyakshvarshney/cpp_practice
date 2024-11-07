#include <iostream>
using namespace std;

class base{
    public:
    virtual void start() {
        cout<<"Engine started \n";
    }
};

class derived : public base{
    public:
    void start() override{
        cout<<"Car started \n";
    }
};

int main() {
    base *d=new derived();
    
    d->start();
    
    delete d;

    return 0;
}
