#include<iostream>
#include<fstream>
using namespace std;

class complex{
    int real,img;
    public: 
        complex(int r=0 , int i=0) : real(r) , img(i) {}
        
        friend ostream& operator<<(ostream& out,const complex& c);
        friend istream& operator>>(istream& in, complex& c);
};

ostream& operator<<(ostream& out,const complex& c){
    out<<c.real<<"+"<<c.img<<"i";
    return out;
}

istream& operator>>(istream& in, complex& c){
    in>>c.real>>c.img;
    return in;
}

int main(){
    complex c1,c2;
    
    cout<<"enter real and imaginary part of complex number: ";
    cin>>c1;
    // cout<<"enter real and imaginary part of complex number: ";
    // cin>>c2;
    
    ofstream outfile("complex.txt");
    outfile<<c1;
    outfile.close();
    
    ifstream infile("complex.txt");
    infile>>c1;
    cout<<"read from file : "<<c1<<endl;
    infile>>c2;
    cout<<"read from file : "<<c2<<endl;
    infile.close();
    
    return 0;
}
