#include <iostream>
using namespace std;

class bank{
    double balance;
    public:
        bank( double amount ){
            balance = amount ;
        }
        friend void printbalance(const bank& account);
};

void printbalance(const bank& account){
    cout<<"balance : "<< account.balance <<endl;
}

int main() {
    bank b(5000);
    printbalance(b);
    return 0;
}
