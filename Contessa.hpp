#include "Player.hpp"
namespace coup{
    class Contessa : public Player
    {
    private:

    public:
        Contessa(Game &game, string name);
        ~Contessa();
        void block_asses(Player p);
        
    };
    
    
    


}