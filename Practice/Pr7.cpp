/*#include <iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	double num;
		cout << "Введите произвольное число: ";
	cin >> num;
	if (num < 10)
	{
		cout << "Это число меньше 10." << endl;
			}
	else if(num==10)
	{
		cout << "Это число равно 10." << endl;
	}
	else {
		cout << "Это число больше 10." << endl;
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "enter point coordinates : \n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
//	if ((y <= 1 && y >= 0 && x >= -1 && x <= 0) || (y <= 0 && y >= -1 && x >= 0 && x <= 1))
	if (y*x<-1)
	{
		cout << "this point belongs to area";
	}
	else
	{
		cout << "this point doesn’t belong to area";
	}
	cin.get();
	cin.get();
}*/

/*#include<iostream>
using namespace std;
int main()
{
	char sign;
	double num1, num2, result;
	bool For_resultat;
	cout << "enter number 1" << endl;
	cin >> num1;
	cout << "enter sign" << endl;
	cin >> sign;
	cout << "enter number 2" << endl;
	cin >> num2;
	switch (sign)
	{
	case '+':
	{
		result = num1 + num2;
		For_resultat = 0;
		break;
	}
	case '-':
	{
		result = num1 - num2;
		For_resultat = 0;
		break;
	}
	case '*':
	{
		result = num1 * num2;
		For_resultat = 0;
		break;
	}
	case '/':
	{
		if (num2 != 0)
		{
			result = num1 / num2;
			For_resultat = 0;
			break;
		}
		else
			cout << "error: division by zero";
			For_resultat = 1;
			break;
	}
	default:
		cout << "error: wrong symbol";
		For_resultat = 1;
		break;
	}
	if (For_resultat == 0)
	cout << "result is: " << result;
	cin.get();
	cin.get();
}*/