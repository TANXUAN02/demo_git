#include<iostream>
using namespace std;

int main()
{
	int c = 10;
	cout << c << endl;
	cout << &c << endl;
	cout << *&c << endl;
	int *xp =  &c;
	cout << *xp << endl; // neu dung cout << xp chỉ ra địa chị

	*xp = 100; // thay đỏi giá trị của địa chỉ gốc
	cout << c;
	float* pt{ 0 }; // con trỏ null
	float* pt2; // con tro rác
	pt2 = 0; // thành con trỏ null
}