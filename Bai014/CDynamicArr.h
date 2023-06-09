#include<iostream>
#include <iomanip>
using namespace std;

class CDynamicArr
{
private:
	int n;
	int* arr;
public:
	friend istream& operator >> (istream&, CDynamicArr&);
	friend ostream& operator << (ostream&, CDynamicArr&);
};

istream& operator >> (istream& is, CDynamicArr& arr)
{
	cout << "\nEnter n - size of array:	";
	is >> arr.n;
	arr.arr = new int[arr.n];
	for (int i = 0; i < arr.n; i++)
	{
		cout << "Enter arr[" << i << "]:			";
		is >> arr.arr[i];
	}
	return is;
}

ostream& operator << (ostream& os, CDynamicArr& arr)
{
	cout << "\nThe inputted array is:" << endl;
	for (int i = 0; i < arr.n; i++)
		cout << setw(10) << setprecision(6) << arr.arr[i];
	cout << endl;
	return os;
}