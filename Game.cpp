// Game.cpp : Defines the entry point for the console application.

#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::mainMenu()
{
	cout << R"(
 ___      ___       __        __    _____  ___       ___      ___   _______  _____  ___   ____  ____  
|"  \    /"  |     /""\      |" \  (\"   \|"  \     |"  \    /"  | /"     "|(\"   \|"  \ ("  _||_ " | 
 \   \  //   |    /    \     ||  | |.\\   \    |     \   \  //   |(: ______)|.\\   \    ||   (  ) : | 
 /\\  \/.    |   /' /\  \    |:  | |: \.   \\  |     /\\  \/.    | \/    |  |: \.   \\  |(:  |  | . ) 
|: \.        |  //  __'  \   |.  | |.  \    \. |    |: \.        | // ___)_ |.  \    \. | \\ \__/ //  
|.  \    /:  | /   /  \\  \  /\  |\|    \    \ |    |.  \    /:  |(:      "||    \    \ | /\\ __ //\  
|___|\__/|___|(___/    \___)(__\_|_)\___|\____\)    |___|\__/|___| \_______) \___|\____\)(__________) 
                                                                                                      
)" << endl;
	cout << endl;
	cout << "1: Begin The Game" << endl;
	cout << "2: Dedication" << endl;
	cout << "3: About the Creator" << endl;
	cout << "4: #5 Will Blow Your Mind" << endl;
	cout << "5: AHHHHHHHHHHHHHHHHHHHHH" << endl;
	cin.get();
	system("CLS");
}

void Game::dialogue(const string& text, const int& delay)
{
	for (std::size_t i = 0; i!= text.size(); ++i) 
	{
		cout << text[i] << std::flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(delay));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(700));
	cout << endl;
	this->setTotalDialogue(this->getTotalDialogue(), text);
}

//Option Menu Shit
int Game::optionMenu(const string& one, const string& two, const string& three, const string& four) {
	int currOption = 1;
	int changeOption = 1; 
	int selectedOption = 0; 
	bool choosing = true;
	string arrow = "[>>] ";
	string empty = "[] ";
	cout << arrow + one << endl;
	cout << empty + two << endl;
	cout << empty + three << endl;
	cout << empty + four << endl;
	while (choosing) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
		currOption = changeOption;
		int enterCount = 0; 
		if (GetAsyncKeyState(VK_RETURN)) {
			++enterCount;
		}
		if (GetAsyncKeyState(VK_RETURN)&& enterCount>=1)
		{
			switch (currOption)
			{
			case 1:
				selectedOption = 1;
				return selectedOption;
				break;
			case 2:
				selectedOption = 2;
				return selectedOption;
				break;
			case 3:
				selectedOption = 3;
				return selectedOption;
				break;
			case 4:
				selectedOption = 4;
				return selectedOption;
				break;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			switch (currOption)
			{
			case 1:
				system("cls");
				cout << this->getTotalDialogue() +"\n";
				cout << empty + one << endl;
				cout << arrow + two << endl;
				cout << empty + three << endl;
				cout << empty + four << endl;
				changeOption = 2;
				break;
			case 2:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << empty + one << endl;
				cout << empty + two << endl;
				cout << arrow + three << endl;
				cout << empty + four << endl;
				changeOption = 3;
				break;
			case 3:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << empty + one << endl;
				cout << empty + two << endl;
				cout << empty + three << endl;
				cout << arrow + four << endl;
				changeOption = 4;
				break;
			case 4:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << arrow + one << endl;
				cout << empty + two << endl;
				cout << empty + three << endl;
				cout << empty + four << endl;
				changeOption = 1;
				break;
			}
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			switch (currOption)
			{
			case 1:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << empty + one << endl;
				cout << empty + two << endl;
				cout << empty + three << endl;
				cout << arrow + four << endl;
				changeOption = 4;
				break;
			case 2:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << arrow + one << endl;
				cout << empty + two << endl;
				cout << empty + three << endl;
				cout << empty + four << endl;
				changeOption = 1;
				break;
			case 3:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << empty + one << endl;
				cout << arrow + two << endl;
				cout << empty + three << endl;
				cout << empty + four << endl;
				changeOption = 2;
				break;
			case 4:
				system("cls");
				cout << this->getTotalDialogue() + "\n";
				cout << empty + one << endl;
				cout << empty + two << endl;
				cout << arrow + three << endl;
				cout << empty + four << endl;
				changeOption = 3;
				break;
			}
		}
	}
}



//ASCII
void Game::loading()
{
	cout << R"( 
 _        _______  _______  ______  _________ _        _______ 
( \      (  ___  )(  ___  )(  __  \ \__   __/( (    /|(  ____ \
| (      | (   ) || (   ) || (  \  )   ) (   |  \  ( || (    \/
| |      | |   | || (___) || |   ) |   | |   |   \ | || |      
| |      | |   | ||  ___  || |   | |   | |   | (\ \) || | ____ 
| |      | |   | || (   ) || |   ) |   | |   | | \   || | \_  )
| (____/\| (___) || )   ( || (__/  )___) (___| )  \  || (___) |
(_______/(_______)|/     \|(______/ \_______/|/    )_)(_______)
)" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2500));
	system("CLS");

}