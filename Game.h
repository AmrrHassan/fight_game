//
// Created by Amr Hafez on 2020-08-23.
//

#ifndef TASK_2_GAME_H
#define TASK_2_GAME_H
#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
#include "wizard.h"
#include "Harry.h"
#include "voldemort.h"


/**
 * Game.h
 * Purpose: Declare class to initialize properties and function for game flow
 * ...
 * Initialize player1 and 2
 * Functions:
 *      Game()
 *      gamemenu()
 *      fight()
 */

class Game {
//    inialize both players ( harry and voldemort )
    protected:
        wizard* player1;
        wizard* player2;

    public:
//
        Game();
        void gameMenu();
        void fight();

};


#endif //TASK_2_GAME_H
