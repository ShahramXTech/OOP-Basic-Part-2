#include<iostream>
using namespace std;

class shape {
    double radius;
public:
    shape():radius(2) 
	{ 
	}
    shape(double r):radius(r)
	{
	 }
    shape(const shape& s):radius(s.radius)
   { 
   }
    double FCarea() { return 3.14*radius*radius; }

};

int main() {
    shape a1,a2(4.4);
    shape a3(7.88);  

    cout<<"circumference of a1 is : "<<a1.FCarea()<<endl;  
    cout<<"circumference of a2 is : "<<a2.FCarea()<<endl; 
    cout<<"circumference of a3 is : "<<a3.FCarea()<<endl;  
    return 0;
}
