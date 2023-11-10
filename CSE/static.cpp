#include<iostream>
using namespace std;
class stc
{
	static int c;
	int count;
	public:
		void code()
		{
			count=++c;
			cout<<"number:"<<count<<endl;	
		}
		static void show()
		{
			++c;
			cout<<"\n c="<<c<<endl;
		}
};
int stc::c;
int main()
{
	stc s,t,u,v;
	stc::show();
	s.code();
	stc::show();
	t.code();
	stc::show();
	u.code();
	cout<<"FRIENDSHIP";
	stc::show();
	v.code();
	return 0;
}
cout<<"FRIENDSHIP";
