#include <iostream>
using namespace std;

class animal{
    public: 
    virtual void speak() const{
        cout<<"voice of animal"<<endl;
    }
};

class dog : public animal{
    public: 
    void speak() const override{
        cout<<"voice of dog \n";
    }
};

class cat : public animal{
    public: 
    void speak() const override{
        cout<<"voice of cat \n";
    }
};

int main() {
    animal a;
    dog d;
    cat c;
    a.speak();
    d.speak();
    c.speak();
    return 0;
}
