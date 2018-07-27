#ifndef CRITTER_HPP
#define CRITTER_HPP

using namespace std;

class Critter {
	protected:
		int time_steps_taken;
		Critter();
		virtual bool valid_move();
		virtual char** move(char**);
		virtual char** breed(char**);
};
#endif
