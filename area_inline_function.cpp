#include <iostream>
using namespace std;

class rectangle{
    int length , width ;
    public:
        rectangle(int l ,int w){
            length = l;
            width = w ;
        }
        inline int area() const{
            return length*width;
        }
        inline int perimeter() const{
            return 2*(length+width);
        } 
};

int main() {
    rectangle r(5,10);
    cout<<"Area : "<<r.area()<<endl;
    cout<<"Perimeter : "<<r.perimeter()<<endl;
    return 0;
}
