/**
 * @file Duke.hpp ->Role
 */

#include "Player.hpp"
using namespace std;
namespace coup
{
    class Duke : public Player
    {

    public:
        Duke(Game &game, string name);
        ~Duke();
        void tax();
        void block(Player plyer);
    };
}