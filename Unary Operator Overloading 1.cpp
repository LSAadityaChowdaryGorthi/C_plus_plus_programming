#include <iostream>
using namespace std;
class Number
{
private:
int x,y,z;
public:
Number(int n, int n1,int n2)
{
x=n;
y=n1;
z=n2;
}
void operator-()
{
x=-x;
y=-y;
z=-z;	
}
void display()
{
cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;
cout<<"Z= "<<z<<endl;	
}	
};
int main()
{
Number N(10,20,30);
-N;
N.display();
cout<<endl;
N.operator-();
N.display();
cout<<endl;
N.operator-();
N.display();

}
