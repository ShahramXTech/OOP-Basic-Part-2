#include<iostream>
using namespace std;
class Library{
	private:
	string name;
	string location;
	int totalbooks;
	public:
void setName(string n){
	name=n;
}
void setLocation(string loc){
	location=loc;
}
void setTotalbooks(int count){
	totalbooks=count;
}
string getName(){
	return name;
}
string getLocation(){
	return location;
}
int getTotalbooks(){
	return totalbooks;
}
void addbook(int count){
	totalbooks+=count;
}
void removebook(int count){
	if(totalbooks-count<0){
		totalbooks=0; 
		}
else{
totalbooks-=count;
   }
}
void displaylibraryinfo(){
cout<<"Name :"<<name<<endl;
cout<<"Location :"<<location<<endl;
cout<<"BOOks :"<<totalbooks<<endl;	
   }		
};
int main()
{
Library lab;
lab.setName("tes");
lab.setLocation("spadcex");
lab.setTotalbooks(40);
cout<<"library info:";

lab.displaylibraryinfo();
cout<<"add 12 book"<<endl;
lab.addbook(12);

cout<<"updated book :"<<lab.getTotalbooks()<<endl;
cout<<"remove 9 book:"<<endl;
lab.removebook(9);
cout<<"now update book is:"<<lab.getTotalbooks()<<endl;
cout<<"remove 512 all book:"<<endl;
lab.removebook(512);
cout<<"After removed all book:"<<lab.getTotalbooks()<<endl;
	return 0;
}