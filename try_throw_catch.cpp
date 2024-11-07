#include <iostream>
using namespace std;

double divide(double a,double b){
    if(b==0){
        throw runtime_error("division by 0 error");
    }
    return a/b;
}

int main(){
    double num1,num2;
    
    cout<<"enter two numbers to be divided: ";
    cin>>num1>>num2;
    
    try{
        double result = divide(num1,num2);
        cout<<"result: "<<result<<endl;
    }
    catch(const runtime_error &g){
        cout<<"exception: "<<g.what()<<endl;
    }
    return 0;
}
