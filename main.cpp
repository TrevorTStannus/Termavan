#include <iostream>
#include <string>

//Possibly the most impostant part, the cards:
struct Card
{
    char value;
    char suit;
};

//Each player will have a deck of 30 cards, should be an array not a struct, cause it will change

//This is where it starts
int main()
{
   //We should welcome the player to the game first.
    using namespace std;
    cout << "Welcome to Termavan, the Terminal Caravan Game!" << endl;
    cout << "(Based on the Caravan card game from Fallout: New Vegas)" << endl;

    //need a timer to set a small delay between each of these events for pacing

    //now the player needs a deck: use an array fill it with two of each card and all the faces

    //draw hand from playerDeck, draw opponent hand from opponentDeck
    //show player hand
    //show the three empty caravans
    //1. play card, 2. discard card, 3. disband caravan, 4. forfeit
    //player turn, opponent turn keep going
    //victory condition: check each players caravan, if the caravan is between 21 and 26, compare it to the deck across, if it is higher set to true, if one player has two true decks, they win.
}
