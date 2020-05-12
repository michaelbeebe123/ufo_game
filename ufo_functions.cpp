//
// Created by Michael Beebe on 4/6/20.
//

#include "ufo_functions.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
// =====================================================================================================================

// -------------------------------------
// DISPLAYS GREETING AND INSTRUCTIONS
// -------------------------------------
void greet() {
    std::cout << "\n===================================\n"
                 "  Hello, welcome to my UFO game!\n"
                 "===================================\n";
    std::cout << "Instructions: \n"
                 "Save your friend from alien abduction \n"
                 "by guessing the letters in the codeword.\n\n";
}
// =====================================================================================================================

// ----------------------------------------------------------------------
// TAKES IN THE PLAYER GUESS, COUNTS THE NUMBER OF MISSES,
// AND DISPLAY CURRENT GUESSES
// ----------------------------------------------------------------------
void prompt_user(std::string correct_codeword) {

    // # OF MISSES
    int misses = 0;

    // CURRENT ANSWERS
    std::string answer;
    for (int i=0; i < correct_codeword.size(); i++) {
        answer += "_";
    }

    // NUMBER OF INCORRECT GUESSES
    std::vector<char> incorrect;

    // USED TO CHECK IF THE GUESS IS CORRECT
    bool checker = false;

    // USER INPUT
    char letter;

    // DISPLAYS MISSES AND CURRENT GUESSES
    while (misses < 7 && answer != correct_codeword) {
        display_misses(misses);
        display_status(incorrect, answer);

        std::cout << "\n\nPlease enter your guess: \n";
        std::cin >> letter;
        std::cout << "\n\n\n";
        for (int i=0; i < correct_codeword.size(); i++) {
            if (letter == correct_codeword[i]) {
                answer[i] = letter;
                checker = true;
            }
        }
        if (checker == true) {
            std::cout << "Correct!\n";
        } else {
            std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        checker = false;
    }
// CHECKS IF THE PLAYER HAS WON
    endgame(answer, correct_codeword);
}
// =====================================================================================================================

// ----------------------------------------------------------------------
// UPDATES THE NUMBER OF INCORRECT GUESSES AND DISPLAYS CURRENT GUESSES
// ----------------------------------------------------------------------
void display_status(std::vector<char> incorrect, std::string answer) {
    // DISPLAYS THE NUMBER OF INCORRECT GUESSES
    std::cout << "\nIncorrect Guesses:\n";
    for (int i=0; i<incorrect.size(); i++) {
        std::cout << incorrect[i] << " ";
    }
    // DISPLAYS THE CURRENT GUESSES
    std::cout << "\nCodeword:\n";
    for (int i=0; i < answer.size(); i++) {
        std::cout << answer[i] << " ";
    }
}
// =====================================================================================================================

// ------------------------------------------------
// CHECKS IF THE PLAYER HAS WON OR LOST THE GAME
// ------------------------------------------------
void endgame(std::string answer, std::string correct_codeword) {
    if (answer == correct_codeword) {
        std::cout << "\n\nHooray! You saved your friend and defeated the aliens!\n\n";
    } else {
        std::cout << "\n\nOh no! The UFO just flew away with another person!\n\n";
    }
}
// =====================================================================================================================

// ------------------------------
// UPDATES THE UFO IMAGE EACH TURN
// ------------------------------
void display_misses(int misses) {
    if (misses == 0 || misses == 1) {
        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (  Send help! ) \n";
        std::cout << "             /   0   \\      / `-----------'  \n";
        std::cout << "            /  --|--  \\    /                 \n";
        std::cout << "           /     |     \\                     \n";
        std::cout << "          /     / \\     \\                   \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 2) {
        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  0  \\        (  Send help! ) \n";
        std::cout << "             / --|-- \\      / `-----------'  \n";
        std::cout << "            /    |    \\    /                 \n";
        std::cout << "           /    / \\    \\                    \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 3) {
        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (  Send help! ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 3) {
        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (  Send help! ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 4) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  |  \\        (  Send help! ) \n";
        std::cout << "             /  / \\  \\      / `-----------' \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 5) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              / / \\ \\        (  Send help! )\n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 6) {
        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (  Send help! ) \n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
}
// =====================================================================================================================