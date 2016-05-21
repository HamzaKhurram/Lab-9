#include<iostream>
using namespace std;

class band
{
	protected:
		int count;
		virtual get_count();
		
		
};

class symphony:classy band
{
	private:
		int total;
	public:
	void add member();
	void add conductor();
	int get_total();
	symphony();
	void remove member();	
};
symphony::symphony()
{
	count=0;
	total=0;
}
void symphony::add_member()
{
	count+=1;
	
}
void symphony::add_conductor()
{
	count+=1;
	
}
void symphony::remove_member()
{
	count--;
}
int symphony::get_total()
{
	return count;
}
class metal:jazz band
{
	private:
		int total;
	public:
		void add_member();
		void add_pyrotech();
		int get_total();
		metal();
		void remove_member();
};
metal::metal()
{
	total-0;
	count=0;
}
void metal::add_member()
{
	count++;
	total++;
	
}
void metal::add_pyrotech()
{
	count++;
	total++;
	
}
void metal::get_total()
{
	return count;
}
void metal::remove_member()
{
	count--;
	total--;
}
int main(void)
{
	symphony x;
	x.add_member;
	x.add_conductor;
	x.remove_member;
	cout<<x.get_total();
	metal y;
	y.add_member;
	y.add_pyrotech();
	y.remove_member();
	cout<<y.get_total();
}
