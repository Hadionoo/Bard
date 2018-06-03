#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Game
{
public:
	Game();
	~Game();

	void dialogue(const string& text, const int& delay);

	int optionMenu(const string& one, const string& two, const string& three, const string& four);

	void mainMenu();

	inline const bool& isPlaying() const { return this->playing; };

	void loading();

	inline const int& getOption() const { return this->selectedOption; };

	inline const string& getTotalDialogue() const { return this->totalDialogue; };

	inline void setOption(const int& selectedOption) 
	{ 
		this->selectedOption = selectedOption;
	};
	
	inline void setTotalDialogue(const string& totalDialogue, const string& newDialogue)
	{
		if (totalDialogue == "") {
			this->totalDialogue = newDialogue;
		}
		else {
			this->totalDialogue = totalDialogue + "\n" + newDialogue;
		}
	}
	

private:
	bool playing; 
	int selectedOption;
	string totalDialogue;
};
#endif