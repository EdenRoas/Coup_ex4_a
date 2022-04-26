/**
 * @file Player.cpp
 * @author Eden Roas
 * income -> player can take 1 coin from the pile
 * foreign_aid -> take 2 coin from the pile -> will be block by the Duke
 * coup -> depose another player- cost 7 coins
 * role -> return the player role
 * coins -> return how much coins each playre have
 */
#include "Game.hpp"
#include <iostream>
#include <vector>
#include <stdexcept>
namespace coup{

    class Player{
        private:
        std::string name;
        int numcoins;
        
        public:
        Game game;
        Player(Game &game, string name);
        ~Player();
        void income();
        void foreign_aid();
        void coup(Player a);
        void role();
        int coins();
        

    };
}