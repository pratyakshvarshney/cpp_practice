#include <iostream>
using namespace std;

template <typename T>
T findmin(T a,T b){
    return (a<b)?a:b ;
}

int main(){
    cout<<"minimum of a & b: "<<findmin("a","b")<<endl;
    cout<<"minimum of 40 & 23: "<<findmin(40,23)<<endl;
    
    return 0;
}
