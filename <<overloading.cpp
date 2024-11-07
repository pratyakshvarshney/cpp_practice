#include <iostream>
#include <fstream>
using namespace std;

class bank{
    string name;
    double balance;
    public:
        bank(string n,double b) : name(n),balance(b) {}
        friend ostream& operator<<(ostream& o,const bank& b);
};

ostream& operator<<(ostream& o,const bank& b){
    o<<"Account holder: "<<b.name<<"\nbalance: "<<b.balance;
    return o;
}

int main() {
    bank b("raj",10000);
    cout<<b<<endl;
    
    return 0;
}
