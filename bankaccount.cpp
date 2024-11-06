#include<iostream>
using namespace std;

class BankAccount{
    double balance;
    public:
        void deposit(double amount){
            balance+=amount;
            cout<<amount<<" deposited!"<<endl;
        }
        void withdraw(double amount){
            if(amount <= balance){
                balance-=amount;
                cout<<amount<<" withdrawed!"<<endl;
            }
        }
};

int main(){
    BankAccount a;
    a.deposit(1000);
    a.withdraw(500);
    return 0;
}
