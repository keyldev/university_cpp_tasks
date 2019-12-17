#include <iostream>
using namespace std;
int main(){
const int size_x = 10, size_y = 8;
	int a[size_x][size_y] = {{0},{0}};
//~~~~~~~~~~~~[ ДЕБАГ ] ~~~~~~~~~~~~~~~~~~~
	cout << "Дебаг включен" << endl;
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	a[rand() % 10][rand() % 8] = 1;
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int chance = 5, x, y;
	do {
		cout << "Введите номер строки и номер столбца:(прим: 1 1)\n"; 
		cin >> x >> y;
		if (a[x][y] == 1) cout << "Вы выиграли!" << endl;
		if (x > size_x || y > size_y) cout << "Выход за границы массива" << endl;
		else if (a[x][y] == 0)
		{
			cout << "Нет" << endl;
			a[x][y] = 2;
		}
		else if (a[x][y] == 2) cout << "Уже проверяли" << endl;
		chance--;
		if (chance == 0) cout << "GAME OVER" << endl;
	} while (chance != 0);

return 0;
}