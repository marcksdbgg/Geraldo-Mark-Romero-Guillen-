#include <iostream>
using namespace std;

int main()
{
	long long number = 548365842358;
	string ms = "";
	string s_aux = "";
	long long aux = number % 10;
	number = number / 10;
	while (number > 0){
		s_aux += char(aux + int('0'));
		aux = number % 10;
		number = number / 10;
	}
	s_aux += char(aux + int('0'));
	for (int i = s_aux.size() - 1; i >= 0; i--){
		ms += s_aux[i];
	}
	cout << ms << endl;
	return 0;
}