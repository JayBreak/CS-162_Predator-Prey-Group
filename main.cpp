#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "file.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	cout << "Extra credit is included" << endl;
	int answer = menu();
	while(answer == 1) {
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

//create grid
		char** grid = new char*[rows+2];
		for (int i = 0; i < rows+2; i++)
			grid[i] = new char[cols+2];

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
