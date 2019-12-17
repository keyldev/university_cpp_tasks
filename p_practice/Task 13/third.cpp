#include <iostream>
using namespace std;
int main(){
int n, x = 1, count = 1;
			   cin >> n;
			   if (n == 0)
				   cout << 0;
			   else
			   {
				   while ((x *= 2) <= n) // p = p * 2
					   count++;
				   cout << count;
			   }
return 0;
}