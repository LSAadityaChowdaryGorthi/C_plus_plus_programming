//Implementing Single inheritance in public mode only
#include<iostream>
using namespace std;
class student{
	private:
		int roll_no;
	protected:
		int section[10];
	public:
		void get_rno()
		{
			cout<<"\nEnter roll_no: ";
			cin>>roll_no;
		}
		void display_rno()
		{
			cout<<"Your roll.no is: "<<roll_no<<endl;
		}
//		void get_section()
//		{
//			cout<<"\n Enter your section: ";
//			cin>>section;
//		}
//		void display_section()
//		{
//			cout<<"Your section is: "<<section<<endl;
//		}
};
class display:public student{
	private:
		int fees;
	public:
		void get_info()
		{
			get_rno();
			display_rno();
		}
};
int main()
{
	student obj1;
	obj1.get_rno();
	obj1.display_rno();
//	obj1.get_section();
//	obj1.display_section()
}
