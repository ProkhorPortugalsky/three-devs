#include <iostream>
#include <locale>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "1234!" << endl << "С добрым утром = )";
	cin.get();
}
