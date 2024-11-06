#include<iostream>
#define sq(n) (n*n);
using namespace std;

int main(){
    int n;
    cout<<"enter no. to be squared \n";
    cin>>n;
    int square;
    square=sq(n);
    cout<<"Square is : "<<square;
    return 0;
}
