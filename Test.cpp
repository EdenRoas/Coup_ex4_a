#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;

TEST_CASE("The Game Works")
{
    Game first_game{};
	Duke duke{first_game, "Noam"};
	Assassin assassin{first_game, "Tal"};
	Ambassador ambassador{first_game, "Itamar"};
	Captain captain{first_game, "Ofek"};
	Contessa contessa{first_game, "Eden"};
	vector<string> ListOfPlayersNames = {"Noam", "Tal", "Itamar", "Ofek", "Eden"};

	// first round of the game
	CHECK(first_game.turn() == "Noam");//the first who enter the gameis Noam
	CHECK(duke.coins() == 0); // start coins to everybody is 0.
	CHECK(assassin.coins() == 0);
	CHECK(ambassador.coins() == 0);
	CHECK(captain.coins() == 0);
	CHECK(contessa.coins() == 0);
	CHECK_NOTHROW(duke.income());//the duke take one coin from the heap
	CHECK(duke.coins() == 1); // and now he have one coin and he finish his game
	CHECK(first_game.turn() == "Tal");
	CHECK_NOTHROW(assassin.income());
	CHECK(assassin.coins() == 1);
	CHECK(first_game.turn() == "Itamar");
	CHECK_NOTHROW(ambassador.income());
	CHECK(ambassador.coins() == 1);
	CHECK(first_game.turn() == "Ofek");
	CHECK_NOTHROW(captain.income());
	CHECK(captain.coins() == 1);
	CHECK(first_game.turn() == "Eden");
	CHECK_NOTHROW(contessa.income());
	CHECK(contessa.coins() == 1); 
	//End of first round
	CHECK(first_game.turn() == "Noam");//Is the duke turn again
	CHECK(duke.coins() == 1);
	CHECK_NOTHROW(duke.foreign_aid()); // Noam take 2 coins from the heap
	CHECK_EQ(duke.coins(),3);//confirm that the duke took 2 coins
	CHECK(first_game.turn() == "Tal");
	CHECK(assassin.coins() == 1);
	CHECK_NOTHROW(assassin.coup(duke));//Tal remove Noam from the game
	ListOfPlayersNames = {"TAl", "Itamar", "Ofek", "Eden"};
	CHECK_EQ(first_game.players(), ListOfPlayersNames);
	CHECK_NOTHROW(contessa.block(assassin));//Eden block tal action and return noam to the game
	ListOfPlayersNames = {"Noam","TAl", "Itamar", "Ofek", "Eden"};
	CHECK_EQ(first_game.players(), ListOfPlayersNames); //confirm that everyone is in the game again
}