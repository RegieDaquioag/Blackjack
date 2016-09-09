#include "deck.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

Deck :: Deck()
{
    placeOfCard = 0;
    numOfCards = 52;
    deck = new Card[numOfCards];
    
    // ♣ Cards
    deck[0] = Card(2,"♣", '2');
    deck[1] = Card(3,"♣", '3');
    deck[2] = Card(4,"♣", '4');
    deck[3] = Card(5,"♣", '5');
    deck[4] = Card(6,"♣", '6');
    deck[5] = Card(7,"♣", '7');
    deck[6] = Card(8,"♣", '8');
    deck[7] = Card(9,"♣", '9');
    deck[8] = Card(10,"♣", 'T');
    deck[9] = Card(10,"♣", 'J');
    deck[10] = Card(10,"♣", 'Q');
    deck[11] = Card(10,"♣", 'K');
    deck[12] = Card(11,"♣", 'A');
    // ♠ Cards
    deck[13] = Card(2,"♠", '2');
    deck[14] = Card(3,"♠", '3');
    deck[15] = Card(4,"♠", '4');
    deck[16] = Card(5,"♠", '5');
    deck[17] = Card(6,"♠", '6');
    deck[18] = Card(7,"♠", '7');
    deck[19] = Card(8,"♠", '8');
    deck[20] = Card(9,"♠", '9');
    deck[21] = Card(10,"♠", 'T');
    deck[22] = Card(10,"♠", 'J');
    deck[23] = Card(10,"♠", 'Q');
    deck[24] = Card(10,"♠", 'K');
    deck[25] = Card(11,"♠", 'A');
    // ♥ Cards
    deck[26] = Card(2,"♥", '2');
    deck[27] = Card(3,"♥", '3');
    deck[28] = Card(4,"♥", '4');
    deck[29] = Card(5,"♥", '5');
    deck[30] = Card(6,"♥", '6');
    deck[31] = Card(7,"♥", '7');
    deck[32] = Card(8,"♥", '8');
    deck[33] = Card(9,"♥", '9');
    deck[34] = Card(10,"♥", 'T');
    deck[35] = Card(10,"♥", 'J');
    deck[36] = Card(10,"♥", 'Q');
    deck[37] = Card(10,"♥", 'K');
    deck[38] = Card(11,"♥", 'A');
    // ♦ Cards
    deck[39] = Card(2,"♦", '2');
    deck[40] = Card(3,"♦", '3');
    deck[41] = Card(4,"♦", '4');
    deck[42] = Card(5,"♦", '5');
    deck[43] = Card(6,"♦", '6');
    deck[44] = Card(7,"♦", '7');
    deck[45] = Card(8,"♦", '8');
    deck[46] = Card(9,"♦", '9');
    deck[47] = Card(10,"♦", 'T');
    deck[48] = Card(10,"♦", 'J');
    deck[49] = Card(10,"♦", 'Q');
    deck[50] = Card(10,"♦", 'K');
    deck[51] = Card(11,"♦", 'A');
}
//*************************************************************

void Deck::shuffle()
{
    srand (time(0));

    for(int ix = 0; ix < 52; ix++)
    {
        int randNum = rand() % 51 + 1; // random number from 1-51 or 1-52 ?!? idk which
        
        Card temp = deck[ix]; // first run: temp will become 2 of ♣
        deck[ix] = deck[randNum]; // first run: 2 of ♣ will become deck[the random number], lets say it was deck[40] making it 3 of ♦
        deck[randNum] = temp; // first run: now ill make deck[40] which is 3 of ♦ into the temp which was 2 of ♣
    }
    
    for(int ix = 0; ix < 52; ix++) // it shuffles it again to make it more "random"
    {
        int randNum = rand() % 51 + 1; 
        
        Card temp = deck[ix]; 
        deck[ix] = deck[randNum]; 
        deck[randNum] = temp; 
    }
}
//*************************************************************

Card Deck :: draw()
{
    int i = placeOfCard;
    
    placeOfCard++;
    return deck[i];
}
//*************************************************************

ostream& operator << (ostream& output , Card& a)
{

    output << "Card Face: " << a.getCardImage() << endl;
    output << "Card Suit: " << a.getCardSuit() << endl;
    output << "Card Value: " << a.getCardValue() << endl;

    return output;
}
//*************************************************************

void Deck :: displayDeck()
{
    for(int i = 0; i < 52; i++)
        cout << this-> deck[i];
}
//*************************************************************

Deck :: ~Deck()
{
    delete[] deck;
}
