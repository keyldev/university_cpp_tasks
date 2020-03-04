#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;


void show_exits(string str)
{
	cout << "EXITS: " << endl << str << endl;
}
string temp_str;
void exit(string maze[], int str, int col)
{
	maze[str][col] = '.';

	if (maze[str + 1][col] == ' ')
	{
		if (isalpha(maze[str][col - 1])) {  temp_str = temp_str + maze[str][col - 1]; maze[str][col - 1] = '*'; }
		str++; maze[str][col] = '@';
	}
	else if (maze[str][col + 1] == ' ')
	{
		if (isalpha(maze[str + 1][col])) {
			temp_str = temp_str + " " + maze[str + 1][col]; maze[str + 1][col] = '*';
		}
		col++; maze[str][col] = '@';
	}
	else if (maze[str - 1][col] == ' ')
	{
		if (isalpha(maze[str - 1][col])) {
			temp_str = temp_str + " " + maze[str - 1][col]; maze[str - 1][col] = '*';
		}
		str--; maze[str][col] = '@';
	}
	else if (maze[str][col - 1] == ' ')
	{
		if (isalpha(maze[str][col + 1])) {
			temp_str = temp_str + " " + maze[str][col + 1]; maze[str][col + 1] = '*';
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
	//Sleep(400);
	system("cls");
	for (int i = 0; i < 25; i++) {
		cout << maze[i] << endl;
	}
	show_exits(temp_str);
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