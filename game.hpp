#ifndef game_hpp
#define game_hpp

#include "Critter.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


class game{

public:

       game();
       ~game();
       void set_Info();
       void createBoard();
       void addCritter(Critter);
	   int getnum_ants();
	   void setnum_ants(int);
	   int getnum_doodlebugs();
	   int getnum_critters();
	   int getRows();
	   int getCols();
	   int getnum_steps();


protected:
       // We need to store all critters in the same array
       Critter **critters;
       int num_critters;

       Ant **ants;
       int num_ant;
       Doodlebug **doodlebugs;
       int num_doodlebugs;

       char** grid;
       int rows;
       int cols;
       int num_steps;

};

#endif
