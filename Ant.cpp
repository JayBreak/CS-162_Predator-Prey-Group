#include "Critter.hpp"
#include "Ant.hpp"
#include <stdlib.h>

using namespace std;

Ant::Ant() {
	ant_row = 1;
	ant_col = 1;
}

bool Ant::valid_move(char** grid, Ant* ants) {
	
}

char** Ant::move(char** grid, Ant* ants) {

}

char** Ant::breed(char** grid, Ant* ants) {
	
}

Ant* Ant::resize_ants(Ant* ants, int num_ants) {
	delete [] ants;
	Ant* resized_ants = new Ant[num_ants];
	return resized_ants;
}

void Ant::set_ant_row(int num) {
	ant_row = num;
}

void Ant::set_ant_col(int num) {
	ant_col = num;
}
