#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "Critter.hpp"
#include "file.hpp"
#include "game.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	int *num_ants = 0;

	intro();		//prints intro - in file.cpp

	game *g;
	g = new game;		//creates new game

	int answer = menu();
	while(answer == 1) {

		g->set_Info();		//gets starting info from user
		g->createBoard();

//create ant and doodlebug vectors
		Ant* ants = new Ant[g->getnum_ant()];
		Doodlebug* doodlebugs = new Doodlebug[g->getnum_doodlebugs()];

//populate grid with characters
		//Why are we setting this equal to grid?
		grid = pop_grid(grid, g->getRows(), g->getCols(), g->getnum_ant(), g->getnum_doodlebugs(), doodlebugs, ants);

//play game
		game_play(grid, g->getnum_steps(), g->getnum_ant(), num_doodlebugs, doodlebugs, ants, rows, cols);

//delete dynamic memory
		delete [] ants;
		delete [] doodlebugs;
		for (int i = 0; i < rows+2; i++)
			delete grid[i];
		delete [] grid;

//reprompt user if they want to play the game again or quit
		answer = menu();
	};

	return 0;
}
