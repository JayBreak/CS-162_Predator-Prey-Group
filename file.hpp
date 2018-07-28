#ifndef FILE_HPP
#define FILE_HPP
#include "Ant.hpp"
#include "game.hpp"
#include "Doodlebug.hpp"
#include <string>

using namespace std;

void intro();
void space(int);            //prints x number of blank lines
int menu();
int prompt_number();
bool is_int(string);
int get_int(string);
char** pop_grid(char**, int, int, int, Doodlebug*, Ant*, int, int);
//void game_play(char**, int*, int*, int*, Doodlebug*, Ant*, int*, int*);
void game_play(char**, game g, Doodlebug*, Ant*);
void print_grid(char**, int, int);
#endif
