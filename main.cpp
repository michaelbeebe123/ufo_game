#include <iostream>
#include "ufo_functions.h"
#include <vector>
#include <string>
#include <cstdlib>

int main() {
// =====================================================================================================================
// -------------------------------------
// DISPLAYS GREETING AND INSTRUCTIONS
// -------------------------------------
    greet();

// --------------------------------------------------------------
// RANDOMLY PICKING THE CORRECT ANSWER FROM THE CODEWORDS VECTOR
// --------------------------------------------------------------
    // VECTOR OF POSSIBLE CORRECT ANSWERS
    std::vector<std::string> codewords = {"goats", "chickens", "cows", "dogs",
                                          "cats", "pigs", "spaghetti", "lettuce"};

    srand(time(NULL));
    int random_int = rand() % codewords.size();

    std::string correct_codeword = codewords[random_int];

// ----------------
// RUNS THE GAME
// ----------------
    prompt_user(correct_codeword);

// =====================================================================================================================
}