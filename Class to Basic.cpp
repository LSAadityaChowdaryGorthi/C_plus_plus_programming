//Class To Basic
#include <iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	public:
	time()
		{
			hours = 0;
			minutes = 0;
		}
	time(int a,int b)
		{
			hours = a;
			minutes = b;
		}
	operator int()
		{
        cout << "Conversion of Hours and minutes ---> Minutes"<<endl;
        return (hours * 60 + minutes);
    	}
};

void TypeConversion(int hours, int minutes) 
{
    int duration;
    time t (hours, minutes);
    duration = t;
    cout << "Total Minutes are " << duration << endl;
}
int main() {
	int hours,minutes;
	cout<<"Enter hours: ";
	cin>>hours;
	cout<<"Enter Minutes: ";
	cin>>minutes;
    TypeConversion(hours, minutes);
    return 0;
}
