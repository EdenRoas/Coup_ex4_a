/**
 * @file Duke.hpp ->Role
 */

#include "Player.hpp"
using namespace std;
namespace coup
{
    class Duke : public Player
    {
    private:

    public:
        Duke(Game &game, string name);
        ~Duke();
        void take_tax_3();
        void block_foreign_aid (Player plyer);
        
        
    };
}