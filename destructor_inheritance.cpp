#include<iostream>
using namespace std;

class Book{
    public:
        ~Book(){
            cout<<"Base destructor \n";
        }
};

class child : public Book{
    public:
        ~child(){
            cout<<"Child destructor \n";
        }
};

int main(){
    Book b;
    child c;
    return 0;
}
