#include "Critter.hpp"
#include "Ant.hpp"
#include <stdlib.h>

using namespace std;

Ant::Ant() {
	row = 1;
	col = 1;
}

bool Ant::valid_move(critter* critters, int direction) {

	if (random == 0)
	{
		for(int i = 0; i <)
	}
}

char** Ant::move(char** grid, Ant* ants) {
	int random = rand() % 4;  // 0 up, 1 right, 2 down, 3 left.

}

char** Ant::breed(char** grid, Ant* ants) {

}

Ant* Ant::resize_ants(Ant* ants, int num_ants) {
	delete [] ants;
	Ant* resized_ants = new Ant[num_ants];
	return resized_ants;
}
