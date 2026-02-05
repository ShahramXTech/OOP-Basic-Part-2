
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    string department;
    string position;

    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Position: "<<position<<endl;
    }
};

int main() {
    Employee EM1,EM2,EM3;

    EM1.name="SHAH";
    EM1.id =232;
    EM1.department="WORKER";
    EM1.position="Manager";

    EM2.name="BROOOE";
    EM2.id=302;
    EM2.department="ART";
    EM2.position="CEO";

    EM3.name="ALI";
    EM3.id=20922;
    EM3.department="BBSE";
    EM3.position="STUDENT";

    EM1.display();
    cout<<endl;
    EM2.display();
    cout<<endl;
    EM3.display();

    return 0;
}
