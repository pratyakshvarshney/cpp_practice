#include <iostream>
#include <stdexcept>
using namespace std;

template <typename t>
class stack{
    static const int maxsize=2;
    t data[maxsize];
    int top;
    public:
        stack():top(-1){}
        
        void push(t value){
            if(top >= maxsize-1){
                throw overflow_error("stack overflow");
            }
            data[++top]=value;
        }
        
        t pop(){
            if(top<0){
                throw underflow_error("stack underflow");
            }
            return data[top--];
        }
        
        bool isempty() const{
            return top==-1;
        }
        
        t peek() const{
            if(top < 0){
                throw underflow_error("stack is empty");
            }
            return data[top];
        }
};

int main(){
    stack<int> s;
    try{
        s.push(10);
        s.push(30);
        s.push(45);
    }
    catch(const overflow_error &e){
        cout<<"exeption: "<<e.what()<<endl;
    }
     
    try{
        cout<<"top element is: "<<s.peek()<<endl;
        cout<<"poped element is: "<<s.pop()<<endl;
        cout<<"poped element is: "<<s.pop()<<endl;
        cout<<"poped element is: "<<s.pop()<<endl;
    }
    catch(const underflow_error &e){
        cout<<"exception: "<<e.what()<<endl;
    }
    
    cout<<"is stack empty: "<<s.isempty();
    
    return 0;
}
