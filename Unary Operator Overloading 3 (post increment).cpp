// Preincrement
#include<iostream>
using namespace std;
class Number
{
int x;
public:
Number(int n)
{
x=n;
}
void operator++(int)
{
cout<<"\nPrefix increment:";
cout<<++x<<endl;
}
friend void operator--(Number);
};
void operator--(Number N)
{
cout<<"\nPostfix decrement:";
cout<<N.x--<<endl;
}
int main()
{
Number N1(10),N2(20);
////N1++;
//N1.operator++();
operator--(N2,200);
return 0;
}
