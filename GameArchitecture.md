Termavan Architecture
===
##Classes
1. Card
	- Fields
	  - `String suit`
	  - `String value`
	  - `Function effect(Caravan caravan, Card c)` - I don't really know how lambda's work in C++, but basically this handle how a Jack takes a card away from a Caravan, or how a numerical card increases a Caravan's score etc.. 
	- Methods
	  - a constructor for the Card
	  - `Boolean equals(Card c)` - to determine if a card is the same as another card
	  - `print()` - prints the card unicode suit with number or letter representing value
	  - `Suit getSuit()` - returns the suit
	  - `Value getValue()` - returns the value

2. Deck
   - Fields
   	  - `List<Card> cards`
   - Methods
     - `Deck shuffle()` - shuffles the deck around
     - a method for picking cards... we can think about this more

3. Caravan
	- Fields
	  - `List<Card> cards`
	  - `int Score`
	  - `boolean isDirectionIncreasing` - increasing or decreasing
	- Methods
	  - `addCardToCaravan(Card playerCard, Card caravanCard)` - this will call the appropriate method, the caravanCard is the card that the player is putting their card on top of. This will call the cards function with this caravan and the caravanCard. i.e. `playerCard.getEffect(this, caravanCard)` - `this` keyword gets the current object 

4. Player
	- Fields
	  - `Deck deck`
	  - `List<Card> hand`
	  - `int Money`
	  - `private static final int caravanCount = 3`
	  - `Array<Caravan> caravans` - with size of caravanCount
	- Methods
	  - Getters for the fields
	  - `void setCaravans(Array<Caravan> caravans)` - this will allow the `GameEngine` to handle all the rules
	  - `writeToJson()` - future method not needed at first, but will write the player's value to a JSON so we can have a player state and a player can pick up where they left off

5. AIPlayer - Extends Player
	- Fields
	  - not really sure they need any
	- Methods
	  - playTurn(GameEngine g)

6. Game
	- Fields
		- `int playerBets`
		- `boolean isPlayersTurn` - a boolean to decided who's turn it is
		- `Player playerOne`
		- `Player playerTwo`
		- ...more stuff just related to the game
	- Methods
	   - `void startGame()` - sets the players Decks, and prompts players to bet
	   - All the stuff needed for if a player returns `x` to standard-in then do so and so. i.e. A player will be prompted to pick a card and then a caravan, and then a card in the caravan. this will have methods for choosing all of those.
	   - last but not least a `main` method 

7. UI
	- Fields
	  - This is a utility class so everything will be static
	- Method
	  - `renderScreen(Game g)` - this will take in the state of the game, and print out some ascii art to make a screen. It will take the state of both players caravans and the playersHand and print all on the screen like so: &#2660; = SPADES, &#2666; = DIAMONDS, &#2663; = CLUBS, &#2764; = HEARTS


```
  ______                                          
 /_  __/__  _________ ___  ____ __   ______ _____ 
  / / / _ \/ ___/ __ `__ \/ __ `/ | / / __ `/ __ \
 / / /  __/ /  / / / / / / /_/ /| |/ / /_/ / / / /
/_/  \___/_/  /_/ /_/ /_/\__,_/ |___/\__,_/_/ /_/ 
                                                  
================================================
PlayerTwo's Caravans
Caravan1 : 10 | Caravan2 : 9 | Caravan3 : 25
------------------------------------------------
3SPADES       | 2SPADES      | 10HEARTS     
2HEARTS       | 7CLUBS       | KDIAMONDS
5HEARTS       |              | 5HEARTS
------------------------------------------------
PlayerOnes's Caravans
Caravan1 : 10 | Caravan2 : 9 | Caravan3 : 25
------------------------------------------------
3SPADES       | 2SPADES      | 10HEARTS
2HEARTS       | 7CLUBS       | KDIAMONDS
5HEARTS       |              | 5HEARTS
================================================
Hand: 3SPADES, 2HEARTS, JDIAMONDS, QHEARTS
------------------------------------------------
Options:
[1] Playcard
[2] Quit game




(will leave space for the max number of options so it always prints inline)

```

following Options could be (after hitting [1])

```
Options (pick card from hand):
[1] 3SPADES
[2] 2HEARTS
[3] JDIAMONDS
[4] QHEARTS
[5] go back
-------------
to then
-------------
Options (pick caravan to play [Chosen Card]):
[1] PlayerTwo - Caravan1
[2] PlayerTwo - Caravan2
...
[4] PlayerOne - Caravan1
...
[7] go back
------------
to then (if you hit [1])
------------
Options (pick card to place [Chosen Card] on top of):
[1] 3SPADES
[2] 2HEARTS
....
[4] go back
```
