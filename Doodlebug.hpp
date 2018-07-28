#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP
#include "Critter.hpp"

using namespace std;

class Doodlebug: public Critter {
	public:
		Doodlebug();
		bool valid_move(char**, Doodlebug*, int, int, int);
		char** move(char**, Doodlebug*, int, int, int, bool&);
		char** breed(char**, Doodlebug*, int, int, int);

};
#endif
