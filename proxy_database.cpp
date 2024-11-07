#include <iostream>
using namespace std;

class Database{
    public:
    void accessdata() const{
        cout<<"accessing databse \n";
    }
};

class proxydatabase{
    Database *realdata;
    public:
        proxydatabase(){
            realdata = new Database();
        }
        ~proxydatabase(){
            delete realdata;
        }
        void accessdata(){
            cout<<"Proxy : database access \n";
            realdata->accessdata();
        }
};

int main() {
    proxydatabase p;
    p.accessdata();

    return 0;
}
