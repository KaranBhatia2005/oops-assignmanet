#include<iostream>
using namespace std;
class one{
	public:
int i,count=0;
one(){
	int a;
for(i=1;i>0;i++)
{int c=0;
cout<<"enter the number= ";
cin>>a;
if(a%8==0)
{
	count+=1;
	}	
else
{
	i=-1;
}

	}	
cout<<"Total "<<count<<" "	<<"numbers are valid numbers";
	
}	
	
};

int main()
{
one ob;	
		
	return 0;
}
