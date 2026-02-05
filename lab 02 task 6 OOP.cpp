
#include<iostream>
using namespace std;

class ttt 
{
public:
    static int count; 

    MyClass() 
	{
        count++;
    }

    static int getCount() 
	{
        return count;
    }
};

int ttt::count=0;

int main()
 {
ttt j1,j2;

cout<<"Object:"<<ttt::getCount()<<endl;

return 0;
}
