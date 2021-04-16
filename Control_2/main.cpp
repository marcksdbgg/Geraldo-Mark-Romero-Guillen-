#include <iostream>

using namespace std;

long long potencia(long long x, long long y)
{
	if (y == 0)
		return 1;
	long long aux = 1;
	for (int i = 0; i < y - 1; i++)
		aux = aux * x;
	return aux;
}

int main()
{
	string str = "548365842358";
	int size = str.size();
	long long aux;
	long long contador = 0;
	for (int i = 0; i < size; i++)
	{
		aux = int(str[i]) - int('0');
		aux = aux * potencia(10, (size - i));
		contador += aux;
	}
	cout << contador << endl;
	return 0;
}