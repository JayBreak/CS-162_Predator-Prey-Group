#include "Critter.hpp"
#include "Doodlebug.hpp"
#include "Ant.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Doodlebug::Doodlebug() {
	row = 1;
	col = 1;
}

bool Doodlebug::valid_move(char** grid, Doodlebug* doodlebugs, int num, int rows, int cols) {
	int move = 0;
	if (grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != '-' && grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != '|' && grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != 'X')
		move++;
	if (grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != '-' && grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != '|' && grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != 'X')
		move++;
	if (grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != '-' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != '|' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != 'X')
		move++;
	if (grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != '-' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != '|' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != 'X')
		move++;
	if (move == 0)
		return false;
	else
		return true;
}

char** Doodlebug::move(char** grid, Doodlebug* doodlebugs, int num, int rows, int cols, bool &eaten) {
	doodlebugs[num].time_steps_taken++;
	if (grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] == 'O') {
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
		doodlebugs[num].doodlebug_row++;
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
		doodlebugs[num].time_steps_taken = 0;
		eaten = true;
	}else if (grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] == 'O') {
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
		doodlebugs[num].doodlebug_row--;
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
		doodlebugs[num].time_steps_taken = 0;
		eaten = true;
	}else if (grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] == 'O') {
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
		doodlebugs[num].doodlebug_col++;
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
		doodlebugs[num].time_steps_taken = 0;
		eaten = true;
	}else if (grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] == 'O') {
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
		doodlebugs[num].doodlebug_col--;
		grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
		doodlebugs[num].time_steps_taken = 0;
		eaten = true;
	}else {
		bool has_moved = false;
		do{
		int move = rand() % 4 + 1;
			if (move == 1 && grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != '-' && grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != '|' && grid[doodlebugs[num].doodlebug_row+1][doodlebugs[num].doodlebug_col] != 'X') {
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
				doodlebugs[num].doodlebug_row++;
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
				has_moved = true;
			}else if (move == 2 && grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != '-' && grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != '|' && grid[doodlebugs[num].doodlebug_row-1][doodlebugs[num].doodlebug_col] != 'X') {
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
				doodlebugs[num].doodlebug_row--;
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
				has_moved = true;
			}else if (move == 3 && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != '-' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != '|' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col+1] != 'X') {
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
				doodlebugs[num].doodlebug_col++;
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
				has_moved = true;
			}else if (move == 4 && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != '-' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != '|' && grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col-1] != 'X') {
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = ' ';
				doodlebugs[num].doodlebug_col--;
				grid[doodlebugs[num].doodlebug_row][doodlebugs[num].doodlebug_col] = 'X';
				has_moved = true;
			}
			cout << move << endl;
		}while (has_moved == false);
	}
	return grid;
}

char** Doodlebug::breed(char** grid, Doodlebug* doodlebugs, int num, int rows, int cols) {

}

void Doodlebug::set_doodlebug_row(int num) {
	doodlebug_row = num;
}

void Doodlebug::set_doodlebug_col(int num) {
	doodlebug_col = num;
}
