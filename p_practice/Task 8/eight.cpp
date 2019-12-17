#include <iostream>
using namespace std;
int main(){
double a, b;
   char type;
   cin >> a >> type >> b;
   switch (type)
   {
	   case '+': cout << "Результат сложения: " << a + b << endl; break;
	   case '-': cout << "Результат вычитания: " << a - b << endl; break;
	   case '*':
	   {
		   cout << "Результат умножения: " << a * b << endl;
		   break;
	   }
	   case '/':
	   {
		   if (b == 0)
			   cout << "На ноль делить нельзя.." << endl;
		   else
			   cout << "Результат деления: " << a / b << endl; break;
	   }
	   default: cout << "Другому не научили.." << endl;
   }
return 0;
}