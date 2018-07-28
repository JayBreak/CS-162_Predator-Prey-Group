#include "game.hpp"
#include <iostream>

using std::cout;
using std::endl;

game::game()
{
       //idk if we need anything in the constructor
}

game::~game()
{
       //delete eveything here
}


void game::set_Info()
{
       //initialize and prompt user for rows, columns, number of ants, number of doodlebugs, and number of steps
       int rows, cols, num_ants, num_doodlebugs, num_steps;
       cout << "How many rows would you like for the grid?" << endl;
       rows = prompt_number();
       cout << "How many columns would you like for the grid?" << endl;
       cols = prompt_number();
       cout << "How many ants would you like on the grid?" << endl;
       num_ants = prompt_number();
       cout << "How many doodlebugs would you like on the grid?" << endl;
	   num_doodlebugs = prompt_number();
       cout << "How many steps would you like the game to last?" << endl;
       num_steps = prompt_number();
}

void game::createBoard()
{

//create grid
	char** grid = new char*[rows+2];
	for (int i = 0; i < rows+2; i++)
		grid[i] = new char[cols+2];
}


int game::getnum_ant()
{
	return num_ant;
}

int game::getnum_doodlebugs()
{
	return num_doodlebugs;
}

int game::getnum_critters()
{
	return num_critters;
}

int game::getRows()
{
	return rows;
}

int game::getCols()
{
	return cols;
}

int game::getnum_steps()
{
	return num_steps;
}