#ifndef FILE_HPP
#define FILE_HPP
#include "Ant.hpp"
#include "Doodlebug.hpp"
#include <string>

using namespace std;

int menu();
int prompt_number();
bool is_int(string);
int get_int(string);
char** pop_grid(char**, int, int, int, int, Doodlebug*, Ant*);
void game_play(char**, int, int, int, Doodlebug*, Ant*, int, int);
void print_grid(char**, int, int);
#endif
