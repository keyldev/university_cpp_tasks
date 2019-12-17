#include <iostream>
using namespace std;
int main(){
int n; cin >> n;
	double* a = new double[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	buble_sort(a, n);
	delete[] a;
	void buble_sort(double* arr, int size)
{
	double temp;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	print_array(arr,size);
}
void print_array(double* arr,int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

return 0;
}