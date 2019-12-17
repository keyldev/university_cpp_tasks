#include <iostream>
using namespace std;
int main(){
bool isFind = false;
int s, l1, r1, l2, r2, temp_l1,temp_l2;
cin >> s >> l1 >> r1 >> l2 >> r2;
for (temp_l1 = l1; temp_l1 <= r1 || temp_l1 >= r1; temp_l1++)
{
	for (temp_l2 = l2; temp_l2 <= r2 || temp_l2 >= r2; temp_l2++)
	{
		if (s == temp_l1 + temp_l2)
		{
			l1 = temp_l1;
			l2 = temp_l2;
			isFind = true;
		}
		if (isFind) break;
	}
	if (isFind) break;
}
if (isFind) cout << l1 << " " << l2 << endl;
else cout << -1 << endl;
return 0;
}