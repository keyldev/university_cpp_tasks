#include <iostream>
#include <string.h>
#include <string>
using namespace std;
struct Student
{
	char name[32];
	int group;
	int sec[5]{ 0 };
};
int main()
{
	setlocale(LC_ALL, "Rus");
	Student stud[10] = { "Hell",1,{0,0,0,4,4},"Bell",1,{0,1,2,3,4},"Mell",1,{0,1,2,3,4}, "Tell",1,{0,1,2,3,4},"Trell",1,{0,1,2,3,4},
	"Lell",1,{0,0,0,0,1}, "All",1,{0,0,0,1,1}, "Cell",1,{0,1,2,3,4}, "Jell",1,{0,1,2,3,4}, "Oll",1,{0,1,2,3,4}, };
	Student swap;
	for (int i = 0; i < 10; i++)
		for (int j = i + 1; j < 10; j++)
			if (strcmp(stud[i].name, stud[j].name) > 0)
			{
				swap = stud[i];
				stud[i] = stud[j];
				stud[j] = swap;
			}
	for (int i = 0; i < 10; i++)
	{
		if (stud[i].sec[0] > 0 || stud[i].sec[1] > 0 || stud[i].sec[2] > 0)
		{
			cout << stud[i].name << '\t' << stud[i].group << endl;
			isNotFind = false;
		}
	}
	if (isNotFind) cout << "Список пуст." << endl;
    return 0;
}