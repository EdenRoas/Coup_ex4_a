#include "Player.hpp"
using namespace std;
namespace coup{
    class Captain : public Player
    {
    private:

    public:
        Captain(Game &game, string name);
        ~Captain();
        void block_steal(Player p);
        void steal_2coins(Player p);
    };


}