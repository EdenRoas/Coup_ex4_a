/**
 * turn -> return the name of the player who needs to play right now
 * winner -> return the name of the winner / error during the game
 * players -> return the names of the players that are still play
 */
#include <iostream>
#include <vector>
#include <stdexcept>
//#pragma once 
using namespace std;

namespace coup
{
    class Game
    {
    private:
        
    public:
        vector<string> ListOfPlayers;
        unsigned int i;
        Game();
        ~Game();
        string turn();
        string winner();
        vector<string> players();
        
    };
    
}