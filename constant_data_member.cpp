#include<iostream>
using namespace std;

class Book{
    public:
        string gettitle() const{
            return "C++ book";
        }
};

int main(){
    Book b;
    string a=b.gettitle();
    cout<<a;
    return 0;
}
