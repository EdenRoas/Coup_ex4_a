#include "Game.hpp"

namespace coup
{
    Game::Game()
    { // defult
    }
    string Game::turn()
    {
        return this->ListOfPlayers[i];
    }
    string Game::winner()
    {
        return this->ListOfPlayers[i];
    }
    vector<string> Game::players()
    {
        for (unsigned int i = 0; i < this->ListOfPlayers.size(); i++)
        {
            cout << ListOfPlayers[i] << endl;
        }
        return ListOfPlayers;
    }
    Game::~Game()
    {
    }

} // namespace coup
