#include <iostream>
using namespace std;
int comp2(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}
int main(){
int n;
	   cin >> n;
	   int arr[5] = { 20000000,20000000,20000000,20000000,20000000 };
	   for (int i = 0; i < n; i++)
	   {
		   int k;
		   cin >> k;
		   if (k < arr[0])
		   {
			   arr[0] = k;
			   qsort(arr,5,sizeof(int),comp2);
		   }
		   for (int c = 0; c < 5; c++)
		   {
			   if (arr[c] != 20000000) cout << arr[c] << ' ';
		   }
		   cout << '\n';
	   }
return 0;
}