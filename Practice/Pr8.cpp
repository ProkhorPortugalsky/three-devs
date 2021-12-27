/*#include <iostream>
using namespace std;
int main()
{
	float j, s=0;
	for (int i = 2; ; i += 2)
	{
		cout << "enter j : ";
		cin >> j;
		if (j != 0)
			s = s + i * j;
		else
			break;

	}
	cout << "suma = " << s;
}
*/

#include<iostream>
using namespace std;
int main()
{
	int n, i;
	double t, a, H, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		H =1;
		//f = f + a *(t, n - i);
		for (int ii = 1; ii <= n-i; ii++)
			H = H*t;
		f = f + a * H;
	}
	cout << "f = " << f;
	cin.get();
	cin.get();

}
