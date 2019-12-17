#include <iostream>
using namespace std;
int main(){
int n;
	   cout << "Введите число: ";
	   cin >> n;
	   int f = 1;
	   for (int i = 1; i <= n; i++)
		   f *= i;
	   cout << "Факториал числа: " << n << " = " << f << endl;
			   cout << n << " - cоставное число" << endl
return 0;
}