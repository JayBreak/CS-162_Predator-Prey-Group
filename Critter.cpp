#include "Critter.hpp"

using namespace std;

Critter::Critter() {
	time_steps_taken = 0;
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
