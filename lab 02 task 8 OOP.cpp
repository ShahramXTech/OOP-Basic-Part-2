#include<iostream>
#include<string>
using namespace std;
class shah{
	private:
	string name;
	int age;
	char grade;
	public:
shah(){
	name="didar";
	age=12;
	grade='A';
}
shah(string n,int a,char g){
	name=n;
	age=a;
	grade=g;
}
shah(const shah&obj){
	name=obj.name;
	age=obj.age;
	grade=obj.grade;
}
void setStudentDetails(){
	cout<<"Enter your name:";
	getline(cin,name);
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter your grade:";
	cin>>grade;
	cin.ignore();
}
void display() {
	cout<<"enter your name:"<<name<<endl;
   cout<<"enter your age:"<<age<<endl;
   cout<<"enter your grade:"<<grade<<endl;
   }		
};
int main()
{
  shah p1; 
  
  cout<<"student info"<<endl;   
  p1.display();
  
 shah p2;
 
 p2.setStudentDetails();
 
 cout<<"Student   detail"<<endl;
 p2.display();
 
 shah s3("himr",1,'x');
 
cout<<"Student p3"<<endl;
s3.display();

shah p4=p2;

cout<<"student 09 "<<endl;
4.display();
	
	return 0;
}