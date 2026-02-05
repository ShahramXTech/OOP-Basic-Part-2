#include<iostream>
using namespace std;

class record{
	private:
		
	public:
		 void recordshow(){
			cout<<"objec is created "<<endl;
		}
};

int main()
{
	record x1;
	x1.recordshow();
	return 0;
}