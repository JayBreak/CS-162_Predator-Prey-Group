#ifndef game_hpp
#define game_hpp

#include "Critter.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


class game{

public:

       game();
       ~game();
       set_Info();
       createBoard();
       addCritter(Critter);


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
