#include<iostream>
using namespace std;

inline int square( int x ){
    return x*x;
}

int main(){
    int num=5;
    cout<<"Square: "<<square( num ) <<endl;
    return 0;
}
