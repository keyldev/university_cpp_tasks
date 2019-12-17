#include <iostream>
using namespace std;
int main(){
int type;
   cout << "Введите тип вычисления:(1/2)" << endl;
   cin >> type;
   switch (type)
   {
   case 1:
   {
	   double a, b, c, p, S;
	   cout << "a = " << endl;
	   cin >> a;
	   cout << "b = " << endl;
	   cin >> b;
	   cout << "c = " << endl;
	   cin >> c;
	   if (a + b > c && b + c > a &&a + c > b &&a > 0 && b > 0 && c > 0)
	   {
		   p = (a + b + c) / 2;
		   S = sqrt(p * (p - a) * (p - b) * (p - c));
		   cout << "Результат вычисления по формуле Герона(S) =  " << S << endl;
	   }
	   else
	   {
		   cout << " Это не треугольник " << endl;
	   }
	   break;
   }
   case 2:
   {
	   double x3, x2, x1, y3, y2, y1, S;
	   cout << "Введите х3 y3" << endl;
	   cin >> x3 >> y3;
	   cout << "Введите х2 y2" << endl;
	   cin >> x2 >> y2;
	   cout << "Введите х1 y1" << endl;
	   cin >> x1 >> y1;
	   S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
	   cout << "Результат вычисления по формуле вершин = " << S << endl;
	   break;
   }
   default: cout << "Другому не научили." << endl; break;
   }
return 0;
}