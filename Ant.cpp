#include "Critter.hpp"
#include "Ant.hpp"
#include <stdlib.h>

using namespace std;

Ant::Ant() {
	row = 1;
	col = 1;
}

Ant::~Ant()
{

}

bool Ant::valid_move(char** grid,Ant* ant, int direction) {
	int random = 0;
	if (random == 0)
	{
		/*for (int i = 0; i < )
		{

		}*/
	}
}

char** Ant::move(char** grid, Ant* ants) {
	int direction = rand() % 4;  // 0 up, 1 right, 2 down, 3 left.
	if(valid_move(grid,ants,direction))
	{

	}


	return grid;

}

char** Ant::breed(char** grid, Ant* ants) {

}

Ant* Ant::resize_ants(Ant* ants, int num_ants) {
	delete [] ants;
	Ant* resized_ants = new Ant[num_ants];
	return resized_ants;
}
