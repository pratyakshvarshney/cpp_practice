#include<iostream>
using namespace std;

class Person{
    public:
        int age;
        string name;
        Person(int a){
            age = a;
            cout<<"Age is : "<<age<<endl;
        }
        Person(int a,string s){
            age=a;
            name=s;
            cout<<"Age and Name are : "<<age<<" & "<<name<<endl;
        }
};

int main(){
    Person p(23);
    Person r(62,"raj");
    return 0;
}
