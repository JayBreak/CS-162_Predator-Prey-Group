#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "file.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	intro();		//prints intro - in file.cpp

	game *g;
	g = new game;		//creates new game

	int answer = menu();
	while(answer == 1) {

		g->set_Info();		//gets starting info from user
		g->createBoard();

//create ant and doodlebug vectors
		Ant* ants = new Ant[num_ants];
		Doodlebug* doodlebugs = new Doodlebug[num_doodlebugs];

//populate grid with characters
		grid = pop_grid(grid, rows, cols, num_ants, num_doodlebugs, doodlebugs, ants);

//play game
		game_play(grid, num_steps, num_ants, num_doodlebugs, doodlebugs, ants, rows, cols);

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
