#include <iostream>
using namespace std;

class Attendance{
    int roll;
    public:
        Attendance(int x){
            roll = x;
            cout<<"Constructor for real atttendance class "<<roll<<endl;
        }
        void attcalling(){
            cout<<"Roll no.:"<<roll<<" Present Sir!"<<endl;
        }
        ~Attendance(){
            cout<<"Destructor for Attendance class "<<roll<<endl;
        }
};

class proxyatt{
    int rollno;
    static int rollc;
    Attendance *a;
    public:
        proxyatt(){
            rollno = rollc++;
            cout<<"Proxy class Constructor "<<rollno<<endl;
            a = 0;
        }
        void proxycalling(){
            if(a==0){
                a = new Attendance(rollno);
                a->attcalling();
            }
        }
        ~proxyatt(){
            delete a;
            cout<<"Destructor of proxyatt"<<endl;
        }
};

int proxyatt::rollc;

int main(){
    proxyatt p[10];
    int i;
    while(true){
        cout<<"Enter roll no between 1-10 or 0 for exit!! ";
        cin>>i;
        if(i == 0)
            break;
        p[i-1].proxycalling();
    }
    
    return 0;
}


