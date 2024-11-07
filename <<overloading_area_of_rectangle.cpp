#include <iostream>
#include <stdexcept>
using namespace std;

class rectangle{
    int length,width;
    public:
        rectangle(int l,int w):length(l),width(w){}
        
        int area() const{
            return length*width;
        }
        
        friend ostream& operator<<(ostream& o,const rectangle& r){
            o<<"rectangle[length:"<<r.length<<" width:"<<r.width<<"] has area: "<<r.area();
            return o;
        }
};

int main(){
    rectangle r(10,15);
    cout<<r<<endl;
    
    return 0;
}
