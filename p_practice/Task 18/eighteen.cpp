#include <iostream>
using namespace std;
int main(){
int const n = 10;
int i, min, max, a[n];
for (i = 0; i < n; i++) a[i] = rand() % 201 - 100;
for (int j = 0; j < n; j++) cout << a[j] << " ";
max = min = a[0];
for (i = 1; i < n; i++)
{
	if (max < a[i]) max = a[i];
	if (min > a[i]) min = a[i];
}
cout << "\n\n  max=" << max; cout << "\n  min=" << min;
return 0;
}