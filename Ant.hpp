#ifndef ANT_HPP
#define ANT_HPP
#include "Critter.hpp"

using namespace std;

class Ant: public Critter {
	public:
		int ant_row;
		int ant_col;
		Ant();
		bool valid_move(char**, Ant*);
		char** move(char**, Ant*);
		char** breed(char**, Ant*);
		Ant* resize_ants(Ant*, int);
		void set_ant_row(int);
		void set_ant_col(int);
};
#endif
