#include <iostream>
using namespace std;

class Engine{
    int horsepower;
    public:
    Engine(int hp){
        horsepower=hp;
    }
    friend class car;
};

class car{
    public:
    void display(const Engine& eng){
        cout<<"horsepower of car is : "<<eng.horsepower<<endl;
    }
};

int main() {
    Engine e(2000);
    car c;
    c.display(e);

    return 0;
}
