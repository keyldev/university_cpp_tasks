#pragma once

	enum Status {
		PLAY,
		USER_WIN,
		BOT_WIN,
		NOT_WIN
	};
	struct Game
	{
		char bord[3][3];
		bool isUserTurn;
		char userChar;
		char botChar;
		Status status;
	};
	Game initGame(char userChar);
	void updateDisplay(const Game game);
	void botTurn(Game* game);
	void userTurn(Game* game);
	bool updateGame(Game* game);
	void whoWon(Game* game, int a);


	//Game initGame(char playerChar) {
	//	Game start_game;
	//	for (int i = 0; i < 3; i++)
	//		for (int k = 0; k < 3; k++) {
	//			start_game.bord[i][k] = ' ';
	//		}
	//	start_game.isUserTurn = rand() % 2;
	//	start_game.userChar = playerChar;
	//	if (playerChar == 'X')start_game.botChar = '0';
	//	else start_game.botChar = 'X';
	//	start_game.status = PLAY;
	//	updateDisplay(start_game);
	//	return start_game;
	//}
	//void updateDisplay(const Game game) {
	//	system("cls");
	//	std::cout << "    1   2   3\n  .............\n";
	//	for (int i = 0; i < 3; i++)
	//	{
	//		cout << i + 1 << " : ";
	//		for (int j = 0; j < 3; j++)
	//		{
	//			cout << game.bord[i][j] << " : ";
	//		}
	//		cout << "\n  .............\n";
	//	}
	//}

	//void botTurn(Game* game) {
	//	int maxCounter = 0;
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int k = 0; k < 3; k++)
	//		{
	//			if (game->bord[i][k] != ' ') maxCounter++;
	//		}
	//	}
	//	if (!maxCounter) {
	//		game->bord[1][1] = game->botChar;
	//		return;
	//	}
	//	maxCounter = 0;
	//	for (int i = 0; i < 3; i++) {
	//		if (game->bord[i][i] == game->userChar) maxCounter++;
	//		else if (game->bord[i][i] == game->botChar) maxCounter--;
	//	}
	//	if (maxCounter == 2) {
	//		for (int l = 0; l < 3; l++) {
	//			if (game->bord[l][l] == ' ') {
	//				game->bord[l][l] = game->botChar;
	//				return;
	//			}
	//		}
	//	}
	//	maxCounter = 0;
	//	for (int i = 0; i < 3; i++) {
	//		if (game->bord[i][2 - i] == game->userChar) maxCounter++;
	//		else if (game->bord[i][2 - i] == game->botChar) maxCounter--;
	//	}
	//	if (maxCounter == 2) {
	//		for (int l = 0; l < 3; l++) {
	//			if (game->bord[l][2 - l] == ' ') {
	//				game->bord[l][2 - l] = game->botChar;
	//				return;
	//			}
	//		}
	//	}
	//	for (int i = 0; i < 3; i++) {
	//		maxCounter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[i][k] == game->userChar) maxCounter++;
	//			else if (game->bord[i][k] == game->botChar) maxCounter--;
	//		}
	//		if (maxCounter == 2) {
	//			for (int l = 0; l < 3; l++) {
	//				if (game->bord[i][l] == ' ') {
	//					game->bord[i][l] = game->botChar;
	//					return;
	//				}
	//			}
	//		}
	//	}
	//	for (int i = 0; i < 3; i++) {
	//		maxCounter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[k][i] == game->userChar) maxCounter++;
	//			else if (game->bord[k][i] == game->botChar) maxCounter--;
	//		}
	//		if (maxCounter == 2) {
	//			for (int l = 0; l < 3; l++) {
	//				if (game->bord[l][i] == ' ') {
	//					game->bord[l][i] = game->botChar;
	//					return;
	//				}
	//			}
	//		}
	//	}
	//	for (int i = 0; i < 3; i++) {
	//		maxCounter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[i][k] == game->userChar) maxCounter++;
	//			else if (game->bord[i][k] == game->botChar) maxCounter--;
	//		}
	//		if (maxCounter == 1) {
	//			for (int l = 0; l < 3; l++) {
	//				if (game->bord[i][l] == ' ') {
	//					game->bord[i][l] = game->botChar;
	//					return;
	//				}
	//			}
	//		}
	//	}
	//	for (int i = 0; i < 3; i++) {
	//		maxCounter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[k][i] == game->userChar) maxCounter++;
	//			else if (game->bord[k][i] == game->botChar) maxCounter--;
	//		}
	//		if (maxCounter == 1) {
	//			for (int l = 0; l < 3; l++) {
	//				if (game->bord[l][i] == ' ') {
	//					game->bord[l][i] = game->botChar;
	//					return;
	//				}
	//			}
	//		}
	//	}
	//	for (int i = 0; i < 3; i++)
	//		for (int k = 0; k < 3; k++)
	//			if (game->bord[i][k] == ' ') {
	//				game->bord[i][k] = game->botChar;
	//				return;
	//			}
	//}

	//void userTurn(Game* game) {
	//	int a, b;
	//	std::cout << "Hud: ";
	//	std::cin >> a >> b;
	//	while (a < 1 || a > 3 || b < 1 || b > 3 || game->bord[a - 1][b - 1] != ' ') {
	//		std::cout << "Test" << std::endl;
	//		std::cout << "AAAA: ";
	//		std::cin >> a >> b;
	//	}
	//	game->bord[a - 1][b - 1] = game->userChar;
	//}

	//void whoWon(Game* game, int a) {
	//	if (a == 3)game->status = USER_WIN;
	//	else if (a == -3)game->status = BOT_WIN;
	//}

	//bool updateGame(Game* game) {
	//	int counter;
	//	for (int i = 0; i < 3; i++) {
	//		counter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[i][k] == game->userChar) counter++;
	//			else if (game->bord[i][k] == game->botChar) counter--;
	//		}
	//		whoWon(game, counter);
	//	}
	//	for (int i = 0; i < 3; i++) {
	//		counter = 0;
	//		for (int k = 0; k < 3; k++) {
	//			if (game->bord[k][i] == game->userChar) counter++;
	//			else if (game->bord[k][i] == game->botChar) counter--;
	//		}
	//		whoWon(game, counter);
	//	}
	//	counter = 0;
	//	for (int i = 0; i < 3; i++) {
	//		if (game->bord[i][i] == game->userChar) counter++;
	//		else if (game->bord[i][i] == game->botChar) counter--;
	//	}
	//	whoWon(game, counter);
	//	counter = 0;
	//	for (int i = 0; i < 3; i++) {
	//		if (game->bord[i][2 - i] == game->userChar) counter++;
	//		else if (game->bord[i][2 - i] == game->botChar) counter--;
	//	}
	//	whoWon(game, counter);
		/*if (game->status == PLAY) {
			counter = 0;
			for (int i = 0; i < 3; i++) {
				for (int k = 0; k < 3; k++) {
					if (game->bord[i][k] == ' ')counter++;
				}
			}
			if (!counter) {
				game->status = NOT_WIN;
				return true;
			}
			game->isUserTurn = !game->isUserTurn;
			return false;*/
	//	}
	//	return true;
	//}