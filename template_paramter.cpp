#include <iostream>
using namespace std;

template <typename T, int size>
class array{
    T a[size];
    public:
        array(){
            for(int i=0;i<size;i++){
                a[i]=T();
            }
        }
        
        void set(int index ,T value){
            if(index >= 0 && index<size){
                a[index]=value;
            }
            else{
                cout<<"index is out of bound \n";
            }
        }
        
        T get(int index){
            if(index>=0 && index<size){
                return a[index];
            }
            else{
                cout<<"index out of bound \n";
                return T();
            }
        }
        
        int getsize() const{
            return size;
        }
};

int main(){
    array<int,5> a;
    a.set(0,45);
    a.set(1,32);
    
    cout<<"size of array is: "<<a.getsize()<<endl;
    cout<<"element at index 0: "<<a.get(0)<<endl;
    cout<<"element at index 1: "<<a.get(1)<<endl;
    
    return 0;
    
    
}
