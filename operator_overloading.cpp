#include <iostream>
using namespace std;

class complex{
    int real,img;
    public:
        complex(int r=0,int i=0) : real(r),img(i){}
        complex operator+(const complex& c1) const{
            return complex(real+c1.real,img+c1.img);
        }
        complex operator*(const complex& c) const{
            return complex(real*c.real - img*c.img , real*c.img+img*c.real);
        }
        void display() const{
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};

int main() {
    complex c1(3,2) , c2(4,5);
    complex sum = c1+c2;
    complex product = c1*c2;
    
    cout<<"sum is : ";
    sum.display();
    cout<<"product is : ";
    product.display();

    return 0;
}
