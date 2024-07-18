/*
* A simple proverb generator that
* demonstrates the switch.
*/

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter a number from 1 to 3: ";
	cin >> num;

	switch (num)
	{//The value of num determines the case sequence executed.
	case 1:
		cout << "Rolling stone gathers no moss.\n";
		break;
	case 2:
		cout << "A bird in hand is worth two in the bush.\n";
		break;
	case 3:
		cout << "A fool and his money are soon parted.\n";
		break;
	default:
		cout << "You must enter either 1, 2, or 3.\n";
	}

	system("pause");
	return 0;
}