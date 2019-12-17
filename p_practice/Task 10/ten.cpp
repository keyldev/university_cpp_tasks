#include <iostream>
using namespace std;
int main(){
double digit, rez, degree;
	   cin >> digit;
	   cin >> degree;
	   rez = 1;
	   if (digit == 0 && degree < 0)
		   cout << "Не определён" << endl;
	   else if (degree >= 0)
	   {
		   for (int i = 0; i < degree; i++)
			   rez *= digit;
		   cout << "Результат вычисления: " << rez << endl;
	   }
	   else
	   {
		   for (int i = 0; i > degree; i--)
			   rez /= digit;
		   cout << "Результат вычисления: " << rez << endl;
	   }
return 0;
}