#include <iostream>

using namespace std;

int main()
{
	char o;
	double d, a, b, c, k;
	while (true)
	{
		cout << "enter your exercice" << endl;
		cin >> a >> o >> b;
		if  (o == '+')
		{ 
			cout << a + b << endl;
		}
		if  (o == '-')
        {
            cout << a - b << endl;
        }
		if  (o == '*')
        {
            cout << a * b << endl;
        }
		if  (o == '/')
        {
			d = a / b;
            cout << d << endl;
        }
		if  (o == '^')
        {
			c = a;
			k = 1;
            while (k < b)
			{
			a = c * a;
			k += 1;
			}
		cout << a << endl;
        }
	}
	system("PAUSE");
	return 0;
}
