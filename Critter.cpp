#include "Critter.hpp"

using namespace std;

Critter::Critter() {
	time_steps_taken = 0;
}

void Critter::set_row(int r)
{
	row = r;
}

void Critter::set_col(int c)
{
	col = c;
}

int Critter::get_row()
{
	return row;
}

int Critter::get_col()
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
