#include <iostream>
using namespace std;
int main(){
cout << "Приветствуем в игре Угадай-ка" << endl;
	   cout << "Правила игры довольно просты:\n\
	   Вы должны угадать число, загаданное компьютером.\n\
	   Всего вам даётся 5 попыток." << endl;
	   srand(100);
	   int i = 0;
	   NewGame:
	   int b = rand() % 100;
	   cout << b << endl;
	   cout <<  "Итак, первая попытка" << endl;
	   int chance;
   TryAgain:
	   i++;
	   cin >> chance;
	   if (chance == b)
		   cout << "Поздравляю , вы победили!)" << endl;
	   else
	   {
		   //str = (chance > b) ? "Загаданное число больше" : "Загаданное число меньше";
		   cout << ((chance > b) ? "Загаданное число больше" : "Загаданное число меньше") << endl;
		   if (i < 5)
			   goto TryAgain;
		   else
		   {
			   cout << "Вы проиграли. Загаданное число = " << b << endl;
			   cout << "Начать новую игру? (Введите 1 в консоль)" << endl;
			   int again;
			   cin >> again;
			   if (again == 1)
				   goto NewGame;
			   else
				   cout << "Игра окончена." << endl;
		   }
	   }
return 0;
}