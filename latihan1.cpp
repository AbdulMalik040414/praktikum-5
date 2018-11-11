#include <iostream>

using namespace std;

int main()
{
	int a,max=0;

	do{
		cout << "masukan bilangan : ";
	cin >> a;

	if (a>max)
		max=a;
	}
	while (a!=0);

	cout << max;

	return 0;
}