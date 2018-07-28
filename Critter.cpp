#include "Critter.hpp"

using namespace std;

Critter::Critter() {
	time_steps_taken = 0;
}

void set_row(int r)
{
	row = r;
}

void set_col(int c)
{
	col = c;
}

void get_row()
{
	return row;
}

void get_col()
{
	return col;
}

bool Critter::valid_move() {
	return true;
}

char** Critter::move(char** grid) {
	return grid;
}

char** Critter::breed(char** grid) {
	return grid;
}
