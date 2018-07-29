#ifndef ANT_HPP
#define ANT_HPP
#include "Critter.hpp"

using namespace std;

class Ant: public Critter {
	public:
		~Ant();
		Ant();
		bool valid_move(char** grid, Ant* ant, int direction);
		char** move(char**, Ant*);
		char** breed(char**, Ant*);
		Ant* resize_ants(Ant*, int);

	protected:


};
#endif
