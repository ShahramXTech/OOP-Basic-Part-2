#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int yearmodel;
    string company;
    int speed;

public:
   
    void setyearmodel(int year) 
	{yearmodel=year; }
    void setCompany(string comp) 
	{ company =comp; }
    void setSpeed(int s) 
	{speed=s; }

 
    int getyearmodel()
	 { return yearmodel; }
    string getCompany()
	 { return company; }
    int getSpeed() 
	{ return speed; }

 
    void accelerate() {
        speed +=5;
    }

    void brake() {
        if (speed>=5) {
            speed-=5;
        } else {
            speed =0;
        }
    }
};

int main() 
{
    Car my;

    my.setyearmodel(2072);
    
    my.setCompany("yyy");
    my.setSpeed(0);
    

    cout<<"year model:"<<my.getyearmodel()<<endl;
    
    cout<<"company: "<<my.getCompany()<<endl;

    for (int i = 0; i<5; i++) {
        my.accelerate();
        cout<<"Speed after"<<i + 1<<":"<<my.getSpeed()<<endl;
}

    for (int i = 0; i <5; i++) {
        my.brake();
        cout<<"speed afte brake "<<i+1<<": "<<my.getSpeed()<<endl;
    }

}