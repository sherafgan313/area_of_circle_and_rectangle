#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int radius;
	float area,circumference;
	
	cout<<"Enter Radius : ";
	cin>>radius;
	
	area=3.1459*radius*radius;
	circumference=2*3.1459*radius;
	
	cout<<"area of the circle is = "<<area<<endl;
	cout<<"circumferenc of the circle is ="<<circumference<<endl;
	
	return 0;
}
