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
	int get_row();
	int get_col();
	void resize(Critter,int);

	virtual bool valid_move();
	virtual char** move(char**);
	virtual char** breed(char**);


};
#endif
