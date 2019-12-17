#include <iostream>
using namespace std;
int main(){
double a, b, c;
   double D;
   cout << "Введите а = " << endl;
   cin >> a;
   cout << "Введите b = " << endl;
   cin >> b;
   cout << "Введите с = " << endl;
   cin >> c;
   if(a == 0)
   {
	   double res;
	   if (b == 0)
	   {// 0*x*x + 0*x + 0 = 0
		   if (c == 0)
			   cout << "Бесконечное множество решений" << endl;
		   else
			   cout << "Нет решений." << endl;
	   }
	   else
	   {
		   res = -c / b;
		   cout << "x1 = " << res << endl;
	   }
   }
   else
   {
	   D = b * b - 4 * a * c;
	   if (D > 0)
	   {
		   cout << "X1 = " << (-b + sqrt(D)) / (2 * a) << endl;
		   cout << "X2 = " << (-b - sqrt(D)) / (2 * a) << endl;
	   }
	   else if (D = 0)
		   cout << "X1 = " << -b / (2 * a) << endl;
	   else if (D < 0)
		   cout << "Нет решений";
   }
return 0;
}