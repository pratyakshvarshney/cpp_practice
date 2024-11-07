#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of multiple of 10 required : ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i] = (i+1)*10;
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    delete[] arr;
    return 0;
}
