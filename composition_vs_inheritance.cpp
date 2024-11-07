#include <iostream>
using namespace std;

class Engine{
    public:
    void start() const{
        cout<<"Engine started \n";
    }
};

class car{
    Engine eng;
    public:
    void startcar(){
        eng.start();
        cout<<"Car started \n";
    }
};

class car_inherit : public Engine{
    public:
    void startcar(){
        start();
        cout<<"Car started \n";
    }
};

int main() {
    car c1;
    c1.startcar();
    
    car_inherit c2;
    c2.startcar();

    return 0;
}
