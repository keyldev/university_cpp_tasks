#include <iostream>
#include "game_func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru"); int sum = 0;
	Game test;
	test = initGame('X');
	userTurn(&test);
	updateDisplay(test);
	botTurn(&test);
	updateDisplay(test);
	userTurn(&test);
	updateDisplay(test);
	botTurn(&test);
	updateDisplay(test);
	userTurn(&test);
	updateDisplay(test);
	botTurn(&test);
	updateDisplay(test);
	userTurn(&test);
	updateDisplay(test);
	botTurn(&test);
	updateDisplay(test);
	userTurn(&test);
	updateDisplay(test);
	botTurn(&test);
	updateDisplay(test);
}

