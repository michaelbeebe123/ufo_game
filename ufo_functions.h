//
// Created by Michael Beebe on 4/6/20.
//

#ifndef UFO_GAME_UFO_FUNCTIONS_H
#define UFO_GAME_UFO_FUNCTIONS_H

#endif //UFO_GAME_UFO_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

void display_misses(int misses);
void greet();
void endgame(std::string answer, std::string correct_codeword);
void display_status(std::vector<char> incorrect, std::string answer);
void prompt_user(std::string correct_codeword);