#include<iostream>
using namespace std;
class bank
{
	public:
    int acc_num=12365;
    string IFSC="HDFC005";
    string bankname="hdfc";
    
    protected:
    int balance;
    int atmpin;
};
class user1:public bank
{
	public:
	
   void	getatmpin(int a)
	{
		atmpin=a;
		cout<<"atmpin="<<atmpin;
	}
	
};






int main();
{
	user1 obj;
	obj.getatmpin(1353);
	return 0;
}