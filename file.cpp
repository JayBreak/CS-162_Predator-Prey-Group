#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "file.hpp"
#include <string>
#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////////////////
// Function: intro
// Description: prints intor text
// Parameters: n/a
// Return: n/a
//////////////////////////////////////////////////////////////////////
void intro()
{
       space(100);
       cout << "======================================================" << endl;
       cout << "" << endl;
       cout << "                    Pedator Prey Game " << endl;
       cout <<"              Created by: <insert names here>" << endl;
       cout << "" << endl;
	cout << "		  **Extra Credit Included!**" << endl;
	cout << "" << endl;
       cout << "======================================================" << endl;
       space(15);
}

//////////////////////////////////////////////////////////////////////
// Function: space
// Description: prints numer of blank lines based on input
// Parameters: integer
// Return: n/a
//////////////////////////////////////////////////////////////////////
void space(int x)
{
     for (int i = 0; i < x; i++)   // loops how many lines you want to space
     {
          cout << " " << endl;
     }
     return;
}

int menu() {
	int answer;
	string num;
	cout << "1. Play game" << endl;
	cout << "2. Quit" << endl;
	do{
		getline(cin, num);
		if (is_int(num) == false || (get_int(num) != 1 && get_int(num) != 2))
			cout << "Invalid input" << endl;
	}while (is_int(num) == false || (get_int(num) != 1 && get_int(num) != 2));
	answer = get_int(num);
	return answer;
}

int prompt_number() {
	int number;
	string num;
	do{
		getline(cin, num);
		if (is_int(num) == false || get_int(num) == 0)
			cout << "Invalid input" << endl;
	}while (is_int(num) == false || get_int(num) == 0);
	number = get_int(num);
	return number;
}

bool is_int(string num) {
	for (int i = 0; i < num.length(); i++) {
		if (!(num.at(i) > 47 && num.at(i) < 58))
			return false;
	}
	return true;
}

int get_int(string num) {
	int number = 0;
	for (int i = 0; i < num.length(); i++) {
		char c = num.at(i);
		number += (c - 48);
		number *= 10;
	}
	return number/10;
}

char** pop_grid(char** grid, int rows, int cols, int num_ants, int num_doodlebugs, Doodlebug* doodlebugs, Ant* ants) {
	for (int i = 0; i < rows+2; i++) {
		for (int j = 0; j < cols+2; j++) {
			if (i == 0 || i == rows+1)
				grid[i][j] = '-';
			else if ((i > 0 && i < rows+1) && (j == 0 || j == cols+1))
				grid[i][j] = '|';
			else
				grid[i][j] = ' ';
		}
	}
	while(num_ants-1 >= 0) {
		int rand_row = rand() % rows + 1;
		int rand_col = rand() % cols + 1;
		if (grid[rand_row][rand_col] == ' ') {
			grid[rand_row][rand_col] = 'O';
			ants[num_ants].set_ant_row(rand_row);
			ants[num_ants].set_ant_col(rand_col);
			num_ants--;
		}
	}
	while(num_doodlebugs-1 >= 0) {
		int rand_row = rand() % rows + 1;
		int rand_col = rand() % cols + 1;
		if (grid[rand_row][rand_col] == ' ') {
			grid[rand_row][rand_col] = 'X';
			doodlebugs[num_doodlebugs].set_doodlebug_row(rand_row);
			doodlebugs[num_doodlebugs].set_doodlebug_col(rand_col);
			num_doodlebugs--;
		}
	}
	return grid;
}

void game_play(char** grid, int num_steps, int num_ants, int num_doodlebugs, Doodlebug* doodlebugs, Ant* ants, int rows, int cols) {
	int steps_taken = 1;
	bool eaten = false;
	cout << "Starting Grid:" << endl;
	print_grid(grid, rows, cols);
	cout << "Number of Ants: " << num_ants << endl;
	cout << "Number of Doodlebugs: " << num_doodlebugs << endl;
	cout << endl;
	do{
		for (int i = 0; i < num_doodlebugs; i++) {
			if (doodlebugs[i].valid_move(grid, doodlebugs, i, rows, cols) == true) {
				grid = doodlebugs[i].move(grid, doodlebugs, i, rows, cols, eaten);
				if (eaten == true) {
					num_ants--;
					ants = ants->resize_ants(ants, num_ants);
				}
			}
		}
		cout << "Time Step " << steps_taken << ":" << endl;
		print_grid(grid, rows, cols);
		cout << "Number of Ants: " << num_ants << endl;
		cout << "Number of Doodlebugs: " << num_doodlebugs << endl;
		cout << endl;
		steps_taken++;
	}while (steps_taken != num_steps);
}

void print_grid(char** grid, int rows, int cols) {
	for (int i = 0; i < rows+2; i++) {
		for (int j = 0; j < cols+2; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
}
