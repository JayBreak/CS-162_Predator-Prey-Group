#ifndef ANT_HPP
#define ANT_HPP
#include "Critter.hpp"

using namespace std;

class Ant: public Critter {
	public:
		~Ant();
		Ant();
		bool valid_move(char**, Ant*);
		char** move(char**, Ant*);
		char** breed(char**, Ant*);
		Ant* resize_ants(Ant*, int);

	protected:
		Ant();


};
#endif
