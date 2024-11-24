#include <iostream>
#include <stdbool.h>
#include <fstream>
using namespace std;

class complex {
    public: 
        int real;
        int img;
        
        complex (int real, int img) {
            this->real = real;
            this->img = img;
        }
        
        void operator += (complex& c) {
            this->real += real;
            this->img += img;
        } 
        
        void operator -= (complex& c) {
            this->real -= real;
            this->img -= img;
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
    c4 += c2;
    
    cout << "complex c3: ";
    cout << c3;
    cout << "complex c4: ";
    cout << c4;
    
    return 0;
}
