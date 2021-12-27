//#include<iostream>
//using namespace std;
//void main()
//{
//	int k=0;
//	int code;
//	char ch;
//	cout << "enter the sequence of symbols\n";
//	do
//	{
//
//		cin >> ch;
//		code = (int)ch;
//		k++;
//		if(ch!='.') cout << "ASCII-code is: " <<code<<"\n";
//	} while (ch != '.');
//	cout<<"Schetchik: " << k;
//	cin.get();
//	cin.get();
//}



//#include <iostream>
//using namespace std;
//void main()
//{
//	int s = 0, val;
// cout << "enter the sequence of numbers\n";
// while (s <= 100)
//
// {
//	 cin >> val;
//	 if (val < 0)
//	 {
//		 s += val * val;
//	 }
//	 else
//	 {
//		 s += val;
//	 }
// }
//
// cout << "s=" << (int)s << endl;
//
// 
// cin.get();
// cin.get();
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int s = 0, val=0, min=0, sumpit = 1, sumdes = 0;
//
//	cout << "enter the sequence of numbers\n";
//
//	do
//	{
//		cin >> val;
//		if (min== 0) min = val;
//		if (val  > 10 && val<25)
//		{
//			sumdes += val;
//		}
//		if (val > 15)
//		{
//			sumpit *= val;
//		}
//		if (val!=0)
//			if (val < min) min = val;
//	} while (val != 0);
//
//	cout << "min=" << (int)min << endl;
//	cout << "sum=" << (int)sumdes << endl;
//	cout << "umnojenie=" << (int)sumpit << endl;
//}
//#include <iostream>
//using namespace std;
//void main() {
//	int n=1, k=5;
//	while (k > 0) {
//		for (int l = 0; l < k; l++) cout << n << "   ";
//		n++;
//		k--;
//		cout << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//void main() {
//	setlocale(LC_ALL, "Russian");
//	int chas, min, sec;
//	cout << "Введите часы: ";
//	do {
//		cin >> chas;
//		if (chas < 0 || chas > 23) cout << "Некоректный ввод. Введите часы: ";
//	} while (chas < 0 || chas > 23);
//	cout << "Введите минуты: ";
//	do {
//		cin >> min;
//		if (min < 0 || min > 59) cout << "Некоректный ввод. Введите минуты: ";
//	} while (min < 0 || min > 59);
//	cout << "Введите секунды: ";
//	do {
//		cin >> sec;
//		if (sec < 0 || sec > 59) cout << "Некоректный ввод. Введите секунды: ";
//	} while (sec < 0 || sec > 59);
//
//	cout << "Число секунд: " << chas * 60 * 60 + min * 60 + sec;
//}
