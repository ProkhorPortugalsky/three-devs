
#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    char ch;
    int code;
    cout << "Type character and press Enter\n";
    cin >> ch;

    code = (int)ch;


    cout << "ASCII-code is: " << code << "\n";

    cout << "The previous character is: " << (char)(ch-1) << "\n";
    cout << "The next character is: " << (char)(ch+1) << "\n";

    return 0;
}


/* 22:00
int main() {
    int a, b, c, p;
    cout << "Enter first side: ";
    cin >> a;
    cout << "Enter second side: ";
    cin >> b;
    cout << "Enter third side: ";
    cin >> c;
    p = (a + b + c) / 2;
    cout << "The area of triangle is: " << sqrt(p * (p - a) * (p - b) * (p - c));


}*/