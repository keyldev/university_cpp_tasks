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
void showInfo(const Student info[], int amount);
int main()
{
	setlocale(LC_ALL, "Rus");
	const int amount_students = 2;
	Student stud[amount_students] = {};
	for (int i = 0; i < amount_students; i++)
	{
		cout << "Фамилия инициалы(Иванов В.А.): " << endl;
		cin.getline(stud[i].name,32);
		cout << "Номер группы(171): " << endl;
		cin >> stud[i].group;
		cout << "Успеваемость(5 значений: 1 2 3 4 5): " << endl;
		for(int j = 0; j < 5; j++)
			cin >> stud[i].sec[j];
		cin.get();
		cout << endl;
	}
	Student swap;
	for (int i = 0; i < amount_students; i++)
		for (int j = i + 1; j < amount_students; j++)
			if (strcmp(stud[i].name, stud[j].name) > 0)
			{
				swap = stud[i];
				stud[i] = stud[j];
				stud[j] = swap;
			}
	showInfo(stud, amount_students);
    return 0;
}
void showInfo(const Student info[], int amount)
{
	setlocale(LC_ALL, "Rus");
	cout << "Name" << '\t' << "Group" << endl;
	bool isEmpty = false;
	for (int i = 0; i < amount; i++)
	{
		if (info[i].sec[0] < 3 || info[i].sec[1] < 3
			|| info[i].sec[2] < 3 || info[i].sec[3] < 3 || info[i].sec[4] < 3) {
			cout << info[i].name << '\t';
			cout << info[i].group << '\t';
			cout << endl;
		}
		else { isEmpty = true; continue; }
	}
	if (isEmpty)
	{
		system("cls");
		cout << "Nothing" << endl;
	}
}