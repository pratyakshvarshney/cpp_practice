#include<iostream>
using namespace std;

class Print{
    public:
        void print(int x){
            cout<<"Integer : "<< x <<endl;
        }
        void print(string x){
            cout<<"String : "<< x <<endl;
        }
};

int main(){
    Print p;
    p.print(10);
    p.print("raj");
    return 0;
}
