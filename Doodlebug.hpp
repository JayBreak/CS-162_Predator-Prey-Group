#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP
#include "Critter.hpp"

using namespace std;

class Doodlebug: public Critter {
	public:
		int doodlebug_row;
		int doodlebug_col;
		Doodlebug();
		bool valid_move(char**, Doodlebug*, int, int, int);
		char** move(char**, Doodlebug*, int, int, int, bool&);
		char** breed(char**, Doodlebug*, int, int, int);
		void set_doodlebug_row(int);
		void set_doodlebug_col(int);

};
#endif
