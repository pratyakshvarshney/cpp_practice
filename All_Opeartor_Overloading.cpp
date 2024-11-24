#include <iostream>
#include <stdbool.h>
#include <fstream>
using namespace std;

class complex {
    public: 
        int real;
        int img;
        
        complex() {}
        
        complex (int real, int img) {
            this->real = real;
            this->img = img;
        }
        
        void operator += (complex& c) {
            this->real += c.real;
            this->img += c.img;
        } 
        
        void operator -= (complex& c) {
            this->real -= c.real;
            this->img -= c.img;
        }
         
        bool operator == (complex& c) {
            if ( this->real == c.real || this->img == c.img) {
                return true;
            }
            return false;
        }
        
        friend ostream& operator << (ostream& o, complex& c) {
            o << "(" << c.real << ") + i(" << c.img <<")" << endl;
            return o;
        }
        
        friend istream& operator >> (istream& cinn, complex& c) {
            int i, r;
            cinn >> r >> i;
            c.real = r;
            c.img = i;
            return cinn;
        }
        
};

int main() {
    complex c1(2,3);
    complex c2(5,6);
    
    cout << "complex c1: ";
    cout << c1;
    cout << "complex c2: ";
    cout << c2;
    
    complex c3(c1);
    c3 += c2;
    complex c4(c1);
    c4 -= c2;
    
    cout << "complex c3: ";
    cout << c3;
    cout << "complex c4: ";
    cout << c4;
    
    if(c3 == c4)
        cout << "c3 and c4 are equal" << endl;
    else
        cout << "c3 and c4 are not equal" << endl;
    
    complex c5;
    cout << "Enter value for c5: ";
    cin >> c5;
    cout << c5;
    
    return 0;
}
