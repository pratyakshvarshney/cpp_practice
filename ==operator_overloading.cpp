#include <iostream>
using namespace std;

class employee{
    int id;
    public:
        employee(int id):id(id){}
        bool operator ==(const employee& e) const{
            return id==e.id;
        }
};

int main() {
    employee e1(10),e2(20),e3(30);
    if(e1==e2){
        cout<<"employee 1 & 2 have same id \n";
    }
    else{
        cout<<"employee 1 & 2 have different id \n";
    }
    return 0;
}
