#include <iostream>
using namespace std;

class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	friend istream& operator >> (istream&, C3DPoint&);
	friend ostream& operator << (ostream&, C3DPoint&);
};

int main()
{
	cout << "Problem 002 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	C3DPoint p;
	cin >> p;
	cout << p;
	return 1;
}

istream& operator >> (istream& is, C3DPoint& p)
{
	cout << "\nEnter your 3D point:" << endl;
	cout << "Enter x:				";
	is >> p.x;
	cout << "Enter y:				";
	is >> p.y;
	cout << "Enter z:				";
	is >> p.z;
	return is;
}

ostream& operator << (ostream& os, C3DPoint& p)
{
	os << "\nThe inputted point's coordinate is:	(" << p.x << ", " << p.y << ", " << p.z << ")." << endl;
	return os;
}