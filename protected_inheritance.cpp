#include <iostream>
using namespace std;

class person{
    protected:
        string name;
    public:
        person(string n) : name(n) {}
        void display() const{
            cout<<"name: "<<name<<endl;
        }
};

class student : protected person{
    public:
        student(string n) : person(n){}
        void show(){
            display();
        }
};

int main(){
    student s("raj");
    s.show();
    
    return 0;
}
