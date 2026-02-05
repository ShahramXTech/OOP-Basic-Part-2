#include<iostream>
using namespace std;
class Inventory{
	private:
   int itemNum;
   int quantity;
   double cost;
   double tcost;
   public:
   Inventory(){
   	itemNum=0;
   	quantity=0;
   	cost=0;
   	tcost=0.0;
   }
Inventory(int n,int q,double c){
	itemNum=n;
	quantity=q;
	cost=c;
 settcost();
}
void setitemNum(int n){
	itemNum=n;
}
int getitemNum(){
	return itemNum;
}
void setquantity(int q){
	quantity=q;
}
int getqunatity(){
	return quantity;
}
void setcost(double c){
	cost=c;
}
double getcost(){
	return cost;
}
void settcost(){
	tcost =cost*quantity;
}
double gettcost(){
	return tcost;
}
void show(){
  cout<<"Item is :"<<itemNum<<endl;
  cout<<"Qunaity :"<<quantity<<endl;
  cout<<"Cost  :"<<cost<<endl;
  cout<<"Total :"<<tcost<<endl;
}
};
int main(){
  Inventory	st1;
  st1.show();
  Inventory st2(32,24,26);
  st2.show();
  st1.setitemNum(77);
    st1.setquantity(4);
    st1.setcost(8.99);
    st1.settcost();
st1.show();
   return 0;
}