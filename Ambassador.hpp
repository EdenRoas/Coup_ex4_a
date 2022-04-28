/**
 * @file Ambassador.hpp
 *
 */
#include "Player.hpp"

using namespace std;
namespace coup
{
    class Ambassador : public Player
    {
    private:
        string name;
        Game game;

    public:
        Ambassador(Game &game, string name);
        ~Ambassador();
        void transfer(Player p_a, Player p_b);
    };

}