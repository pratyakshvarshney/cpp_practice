#include<iostream>
#include<fstream>
using namespace std;

class base{
    public: 
        int pubvar=1;
    protected:
        int provar=2;
    private:
        int privar=3;
};

class pubderived:public base{
    public:
        void showvar(){
            cout<<pubvar<<" "<<provar<<endl;
        }
};

class proderived:protected base{
    public:
        void showvar(){
            cout<<pubvar<<" "<<provar<<endl;
        }
};

class priderived:private base{
    public:
        void showvar(){
            cout<<pubvar<<" "<<provar<<endl;
        }
};

int main(){
    pubderived p1;
    proderived p2;
    priderived p3;
    
    p1.showvar();
    p2.showvar();
    p3.showvar();
    
    return 0;
}
