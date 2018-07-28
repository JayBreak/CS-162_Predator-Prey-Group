#ifndef CRITTER_HPP
#define CRITTER_HPP

using namespace std;

class Critter {
protected:
	int time_steps_taken;
	int row;
	int col;
public:

	Critter();
	void set_row(int);
	void set_col(int);
	void get_row();
	void get_col();
	void resize(critter,int);

	virtual bool valid_move();
	virtual char** move(char**);
	virtual char** breed(char**);


};
#endif
