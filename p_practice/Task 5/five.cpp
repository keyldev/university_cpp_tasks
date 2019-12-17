#include <iostream>
using namespace std;
int main(){
double x0, v0, t, a = -9.8;
   cout << "Введите х0" << endl;
   cin >> x0;
   cout << "Введите v0" << endl;
   cin >> v0;
   cout << "Введите t" << endl;
   cin >> t;
   cout << x0 + v0 * t + (a * t * t) / 2 << endl;
   cout << x0 + v0 * t + 1 / 2 * a * t * t << endl; // т.к если меньший инт разделить на больший инт будет 0.
   system("pause")
return 0;
}