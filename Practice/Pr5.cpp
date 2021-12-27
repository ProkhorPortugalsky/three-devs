#include <iostream>
#include <math.h>
//#include <conio.h>
//#include <cstdlib>
using namespace std;



/*int main()
{
setlocale(LC_ALL, "Rus");
double num1, num2, suma;
cout << "Введите 1 число = ";
cin >> num1;
do {
	cout << "Введите 2 число (<=2) = ";
	cin >> num2;
} while (num2 > 2);
suma = (-num1 + sqrt(pow(num1 , 2) + 3 * num2)) / (2 * num2);
cout << "Пример 1 = " << suma << endl;
suma = sqrt((3 + num1 * num2) / (4 * pow(num1 , 2)));
cout << "Пример 2 = " << suma << endl;
suma = (6 - fabs(num1 - 3 * num2)) / sqrt(5 - pow(num2,2));
cout << "Пример 3 = " << suma << endl;
suma = exp(num1 + 7) * sqrt(37 * num2 - pow(num1 , 3));
cout << "Пример 4 = " << suma << endl;
suma = sin(num1) + (pow(num2 , 2)) / (cos(2 * num1) + 23);
cout << "Пример 5 = "<< suma << endl;
suma = tan(num2) - fabs(num1 - 3 * num2 + 2 / sqrt(num2 + 4));
cout << "Пример 6 = " << suma << endl;
}
*/

/*#include<iostream>
using namespace std;
void main()
{
	char w[5];
	cout << "type characters and press Enter: ";
	char a;
	cin >> w;
	a = w[0];
	w[0] = w[4];
	w[4] = w[2];
	w[2] = a;
	cout << "the result is: " << w;
	cin.get();
	cin.get();
}
*/
int main() {
	char a[4], b[4];
	cin >> a;
	cin >> b;


		int ia = atoi(a);
		int ib = atoi(b);
		cout << (ia+ib);
}

	//cout << (char)((int)a[0] + (int)b[0]) << (char)((int)a[1] + (int)b[1]) << (char)((int)a[2] + (int)b[2]);



/*	int c1, c2, c3;
	int ia = atoi(a);
	int ib = atoi(b);

	c3 = ia % 10 + ib % 10;
	ia = ia / 10;
	ib = ib / 10;

	c2 = ia % 10 + ib % 10;
	ia = ia / 10;
	ib = ib / 10;

	c1 = ia % 10 + ib % 10;

	cout << c1 << c2 << c3;

	return 0;
}*/
