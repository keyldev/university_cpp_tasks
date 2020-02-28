#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

/*bool mazeTrip(string maze[25], int strs, int cols)
{
	maze[strs][cols] = '.';
	string answer;
	string temp_maze[25];
	//checkRight = maze[strs][cols+1] == ' '
	if (maze[strs + 1][cols] == ' ')
	{
		strs++; cout << "down";
		//if (maze[strs][cols + 1] == ' ') temp_maze[strs][cols] = maze[strs][cols];
	}
	else if (maze[strs][cols+1] == ' ')
	{
		maze[strs][cols] == '#' ? cols--:cols++; cout << "right";
	}
	else if (maze[strs - 1][cols] == ' ' )
	{
		strs--; cout << "up";
	}
	else if (maze[strs][cols - 1] == ' ' ) {
		cols--; cout << "left";
	}
	else if (maze[strs][cols - 1] == '#')
	{
		
	}
	if (isalpha(maze[strs][cols])) { answer[strs] = maze[strs][cols]; mazeTrip(maze, strs, cols); }
	
	
	system("cls");
	maze[strs][cols] = '.';
	for (int i = 0; i < 25; i++)
		cout << maze[i] << endl;
	Sleep(100);
	mazeTrip(maze, strs, cols);


	return true;
}*/

/*void mazeTrip(string maze[25], int strs, int cols)
{
	maze[strs][cols] = '.';
	if (maze[strs + 1][cols] == ' ')
	{
		strs++; maze[strs][cols] = '.'; if (isalpha(maze[strs][cols - 1])) cout << "found too";
	}
	else if (maze[strs][cols + 1] == ' ')
	{
		cols++; maze[strs][cols] = '.';
	}
	else if (maze[strs - 1][cols] == ' ')
	{
		strs--; maze[strs][cols] = '.';
	}
	else if (maze[strs][cols - 1] == ' ')
	{
		cols--; maze[strs][cols] = '.';
	}
	else if (maze[strs][cols + 1] == '.' && maze[strs + 1][cols] == '#')
	{
		maze[strs][cols] = '@'; cols++;
	}
	else if (maze[strs + 1][cols] == '.')
	{
		maze[strs][cols] = '@'; strs++; maze[strs][cols] = '@';
	}
	else if (maze[strs + 1][cols] == '#')
	{
		maze[strs][cols] = '@'; cols--;// maze[strs][cols] = '@';
	}
	else if (maze[strs][cols] == '.' )
	{
		maze[strs][cols] = '@'; cols--;//if (isalpha(maze[strs + 1][cols]))cout << "find one";
	}
	else if (maze[strs][cols-1] == '#')
	{
		strs--; maze[strs][cols] = '@'; cout << "ТУТ ВЫЛЕТЕЛО";
	}

	system("cls");
	for (int i = 0; i < 25; i++)
		cout << maze[i] << endl;
	mazeTrip(maze, strs, cols);
}*/


/*
Сделать свитч, если вид поворота 1 - идти вниз, если в тупике - идти обратно, затем, вид поворота 2 - проверять право, вид поворота 3 - лево, вид поворота 4 - верх хз как


*/


class FindExit
{
public:
	string temp_str;
	void mazeTrip(string maze[], int& str, int& col)
	{
		maze[str][col] = '.';
		checkPos(maze, str, col);
		system("cls");
		for (int i = 0; i < 25; i++)
			cout << maze[i] << endl;
		cout << temp_str << endl;
		mazeTrip(maze, str, col);
		ShowResult();
	}
	void checkPos(string maze[], int& str, int& col)
	{
		if (isFrontClear(maze, str, col))moveDown(maze, str, col);
		else if (isRightClear(maze, str, col))moveRight(maze, str, col);
		else if (isUpClear(maze, str, col))moveUp(maze, str, col);
		else if (isLeftClear(maze, str, col))moveLeft(maze, str, col);
		else if (isRightDot(maze, str, col))moveRight(maze, str, col);
		else if (isDownDot(maze, str, col))moveDown(maze, str, col);
		else if (isLeftDot(maze, str, col))moveLeft(maze, str, col);
		else if (isUpDot(maze, str, col))moveUp(maze, str, col);
	}

	//проверяем чисто ли
	bool isFrontClear(string maze[], int& str, int& col)
	{
		if (maze[str + 1][col] == ' ')return true;
		else return false;
	}
	bool isUpClear(string maze[], int& str, int& col)
	{
		if (maze[str - 1][col] == ' ')return true;
		else return false;
	}
	bool isRightClear(string maze[], int& str, int& col)
	{
		if (maze[str][col + 1] == ' ')return true;
		else return false;
	}
	bool isLeftClear(string maze[], int& str, int& col)
	{
		if (maze[str][col - 1] == ' ') return true;
		else return false;
	}

	//проверки на пройденные пути
	bool isRightDot(string maze[], int& str, int& col)
	{
		if (maze[str][col + 1] == '.')return true;
		else return false;
	}
	bool isLeftDot(string maze[], int& str, int& col)
	{
		if (maze[str][col - 1] == '.')return true;
		else return false;
	}
	bool isUpDot(string maze[], int& str, int& col)
	{
		if (maze[str-1][col] == '.')return true;
		else return false;
	}
	bool isDownDot(string maze[], int& str, int& col)
	{
		if (maze[str+1][col] == '.')return true;
		else return false;
	}


	//тут мы ходим. Пытаемся
	void moveDown(string maze[], int& str, int& col)
	{
		if (maze[str + 1][col] == '.' || maze[str + 1][col] == ' ') {
			if (isalpha(maze[str][col - 1])) { temp_str = temp_str + maze[str][col - 1]; }
			str++; maze[str][col] = '@';
		}
		else mazeTrip(maze, str, col);
	}
	void moveRight(string maze[], int& str, int& col) {
		if (maze[str][col+1] == '.' || maze[str][col + 1] == ' ') {
			if (isalpha(maze[str + 1][col])) { temp_str = temp_str + maze[str + 1][col]; }
			col++; maze[str][col] = '@';
		}
		else moveLeft(maze, str, col);// if (maze[str][col] == '.')moveDown(maze, str, col);
	}
	void moveLeft(string maze[], int& str, int& col) {
		if (maze[str][col - 1] == ' '  || maze[str][col - 1] == '.') {
			if (isalpha(maze[str][col + 1])) { temp_str = temp_str + maze[str][col + 1]; }
			col--; maze[str][col] = '@';
		}
		else mazeTrip(maze, str, col); //if (maze[str][col + 1] == '#')moveDown(maze, str, col);

	}
	void moveUp(string maze[], int& str, int& col)
	{
		if (maze[str - 1][col] == ' ' || maze[str - 1][col] == '.') { if (isalpha(maze[str - 1][col])) { temp_str = temp_str + maze[str - 1][col]; }str--; maze[str][col] = '@'; }
		else mazeTrip(maze, str, col);// cout << "errrrrrrrrrrroooooorrrrrrrrrrrrrrr";
	}
	void ShowResult()
	{
		cout << temp_str << endl;
	}
};

void exit(string maze[], int str, int col)
{
	string temp_str;
	maze[str][col] = '.';
	system("cls");
	for (int i = 0; i < 25; i++)
		cout << maze[i] << endl;
	cout << temp_str;
	if (maze[str + 1][col] == ' ')
	{
		if (isalpha(maze[str][col - 1])) { cout << "+ БУКВА" << maze[str][col - 1]; temp_str += " " + maze[str][col - 1]; }
		str++; maze[str][col] = '@';
	}
	else if (maze[str][col + 1] == ' ')
	{
		if (isalpha(maze[str+1][col])) { cout << "+ БУКВА" << maze[str+1][col]; temp_str += " " + maze[str+1][col];
		}
		col++; maze[str][col] = '@';
	}
	else if (maze[str - 1][col] == ' ')
	{
		if (isalpha(maze[str-1][col])) { cout << "+ БУКВА" << maze[str-1][col]; temp_str += " " + maze[str-1][col];
		}
		str--; maze[str][col] = '@';
	}
	else if (maze[str][col - 1] == ' ')
	{
		if (isalpha(maze[str][col +1])) { cout << "+ БУКВА" << maze[str][col +1]; temp_str +=  " " + maze[str][col + 1];
		}
		col--; maze[str][col] = '@';
	}
	else if (maze[str][col+1] == '.')
	{
		maze[str][col] = '@';  col++; maze[str][col] = '@';
	}
	else if (maze[str + 1][col] == '.')
	{
		maze[str][col] = '@'; str++; maze[str][col] = '@';
	}
	else if (maze[str][col - 1] == '.')
	{
		maze[str][col] = '@'; col--; maze[str][col] = '@';
	}
	else if (maze[str - 1][col] == '.')
	{
		maze[str][col] = '@'; str--; maze[str][col] = '@';
	}
	exit(maze, str, col);
}
int main()
{
	setlocale(LC_ALL, "ru");
	const int MAZE_SIZE = 25;

	std::string maze[MAZE_SIZE] = {
	"####B######################",
	"# #       #   #      #    #",
	"# # # ###### #### ####### #",
	"# # # #       #   #       #",
	"#   # # ######### # ##### #",
	"# # # #   #       #     # #",
	"### ### ### ############# #",
	"# #   #     # #           #",
	"# # #   ####### ###########",
	"# # # #       # #         C",
	"# # ##### ### # # ####### #",
	"# # #     ### # #       # #",
	"#   ##### ### # ######### #",
	"######### ### #           #",
	"# ####### ### #############",
	"A           #   ###   #   #",
	"# ############# ### # # # #",
	"# ###       # # ### # # # #",
	"# ######### # # ### # # # F",
	"#       ### # #     # # # #",
	"# ######### # ##### # # # #",
	"# #######   #       #   # #",
	"# ####### ######### #######",
	"#         #########       #",
	"#######E############D######"
	};
	for (int j = 0; j < MAZE_SIZE; j++)
		cout << maze[j] << endl;

	cout << endl;
    int str, col;
    do
    {
        cout << endl << "Введите стартовые координаты через пробел: ";
        cin >> str >> col;

		if (maze[str][col] == '#' )
			cout << "Вы не можете начать со стены." << endl;
		else
			break;

    } while (maze[str][col] != '\0');
	FindExit fe;
	//fe.mazeTrip(maze, str, col);
	exit(maze, str, col);
	return 0;
}