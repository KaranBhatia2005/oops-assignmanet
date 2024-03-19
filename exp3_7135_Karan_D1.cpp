#include<iostream>
#include<stdlib.h>
using namespace std;
class room{
	public:
double length,breadth;
void get()
{double l,b;
	cout<<"enter length and breadth"<<endl;
	cin>>l>>b;
	length=l,breadth=b;
	};	
void display();	
void area()
{
cout<<"area= "<<length*breadth<<endl;	
}	
void perimeter()
{
cout<<"perimeter= "<<2*(length+breadth);	
	
}	
	
};
void room::display(){
cout<<"length= "<<length<<endl;
cout<<"breadth= "<<breadth<<endl;		
}





int main()
{
	system("color 0E");
room obj,obj1,obj2,obj3,obj4;
obj.get();
obj.display();	
obj.area();
obj.perimeter();	
cout<<endl;
obj1.get();
obj1.display();	
obj1.area();
obj1.perimeter();	
cout<<endl;
obj2.get();
obj2.display();	
obj2.area();
obj2.perimeter();	

cout<<endl;
obj3.get();
obj3.display();	
obj3.area();
obj3.perimeter();	
cout<<endl;
obj4.get();
obj4.display();	
obj4.area();
obj4.perimeter();	

return 0;	
}
