#include "Console2048.h"
#include "ConsoleDino.h"
#include "ConsoleSnake.h"
#include <iostream>
#include <windows.h>

using namespace std;

void gamelist() {
	cout << "                                 < GAME LIST > " << endl;
	cout << "                                   1. 2048" << endl;
	cout << "                                   2. DIno" << endl;
	cout << "                                   3. Snake" << endl;
	cout << "                                   6. Quit" << endl;

	cout << "==============================================================================" << endl;
}

void printwait() {
	cout << "Starting.";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
}

void startgame(int n) {
	switch (n) {
	case 1:
		cout << "You selected 2048!" << endl;
		printwait();
		playgame();
	case 2:
		cout << "You selected Dino!" << endl;
		printwait();
		startDino();
	case 3:
		cout << "You selected Snake!" << endl;
		printwait();
		MainGame();
	case 6:
		;
	}
}

void printmenu() {
	system("cls");
	system("color 07");

	cout << "==============================================================================" << endl;
	cout << "   **********             *                 *         *           ***********" << endl;
	cout << "  **        **           * *               ***       ***          **" << endl;
	cout << " **                     *   *             ** **     ** **         **" << endl;
	cout << "**      ********       *******           **   **   **   **        ***********" << endl;
	cout << " **          **       *       *         **     ** **     **       **" << endl;
	cout << "  **        **       *         *       **       ***       **      **" << endl;
	cout << "   **********       *           *     **         *         **     ***********" << endl;
	cout << "==============================================================================" << endl;

	gamelist();

	int num;
	cout << "SELECT Numbers : ";
	cin >> num;
	
	startgame(num);
}

