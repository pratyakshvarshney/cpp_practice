#include <iostream>
using namespace std;

class counter{
    public:
    static int count;
    counter(){
        count++;
    }
};

int counter::count=0;

int main() {
    counter a;
    counter b;
    counter c;
    cout<<"number of objects created : "<<counter::count<<endl;

    return 0;
}
