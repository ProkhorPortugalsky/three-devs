
#include<iostream>
using namespace std;
void main()
{
	char st[6];
	cout « "type characters and press Enter: ";
	char ch;
	cin » st;
	ch = st[1];
	st[1] = st[4];
	st[4] = ch;
	cout « "the result is: " « st;
	cin.get();
	cin.get();
}

#include<iostream>
#include <locale>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	char o;
	cout « "Введите первое число: ";
	cin » x;
	cout « "Делим или складуем ? ";
	cin » o;
	cout « "Введите второе число: ";
	cin » y;
	if (o == '+' or o == '/') {
		if (o == '+') cout « x « "+" « y « "=" « x + y;
		else cout « x « "/" « y « "=" « x / y;
	}
	else cout « "Так нельзя";
	cin.get();
	cin.get();
}
