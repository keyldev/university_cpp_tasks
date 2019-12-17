#include <iostream>
using namespace std;
void swap(int*a, int*b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int msort(int*a, int*b, int*c) {
	if (*b > * a)swap(*&a, *&b);
	if (*c > * b)swap(*&c, *&b);
	if (*a > * c)swap(*&a, *&c);
	return *c;
}
void info(const int*a) {
	cout << "Адрес: " << a << ";" << "Значение: " << *a << endl;
}
int* add(int*a, const int*b) {
	int sum = *a + *b;
	*a = sum;
	return *&a;
}
int main(){
int a = 3, b = 2, c = 1;
	info(&a);
	info(&b);
	info(&c);
	cout << "Максимум: " << msort(&a, &b, &c) << endl;
	add(&a, add(&b,&c));
	info(&a);

return 0;
}