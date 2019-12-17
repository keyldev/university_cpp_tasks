#include <iostream>
using namespace std;
int main(){
int n, i;
		   bool isPrime = true;
		   cout << "Введите число: ";
		   cin >> n;
		   for (i = 2; i <= sqrt(n); i++)
		   {
			   if (n % i == 0) //
			   {
				   isPrime = false;
				   break;
			   }
		   }
		   if (isPrime)
			   cout << n <<" - простое число" << endl;
		   else
			   cout << n << " - cоставное число" << endl
return 0;
}