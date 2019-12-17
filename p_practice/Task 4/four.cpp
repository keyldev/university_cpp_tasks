#include <iostream>
using namespace std;
int main(){
double a, b,temp;
   cin >> a;
   cin >> b;
   temp = a;
   a = b;
   b = temp;
   cout << "A = " << a << endl << "B = " << b << endl;
   double a, b;
   cin >> a;
   cin >> b;
   swap(a, b);
   cout << "A = " << endl << "B = " << b << endl;
return 0;
}