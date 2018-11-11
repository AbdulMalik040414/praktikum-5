#include <iostream>

using namespace std;

int main()
{
	int a,b,c,hasil;

	cout << "masukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	cout << "masukan nilai c : ";
	cin >> c;

	if ((a+b==c) or (a+c==b) or (b+c==a))
		cout << "benar";
	else
		cout << "salah";

	return 0;
}
