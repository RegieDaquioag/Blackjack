#ifndef DEALER_H
#define DEALER_H    
#include "card.h"
#include "deck.h"
#include "player.h"
#include <iostream>
#include <string>
using namespace std;

class Dealer : public Player
{
    private:
        // All member variables
        bool isDealerTurn; // if true, it displays the hidden card of the dealer
        
    public:
        // Constructor
        Dealer();
        // returns true if dealer's hand is 17 or greater.
        bool is17();
        /*
        Pre-condition:
            Dealer hand must have cards to check
        
        Post-condition:
            Will turn true if the dealers hand total is 17 or greater
        Summary:
            Will run through the dealers hand and add all the card values together and 
            return true if the total is 17 or greater.
        */     
        void displayHand();
        /*
        Pre-condition:
            Dealer must have cards in his hand to work
        Post-condition:
            The dealers hand will diplay
        Summary:
            The dealers hand will display, however before the dealers turn the hand will only ldiplay one
            of the cards to micic how the dealers hand is showen in real life.
        */     
        void setIsDealerTurn(bool turn);
        bool getIsDealerTurn() {return isDealerTurn;}
        
        // We do not to do this because it is in the player class that it inherited from
        // Destructor
        // ~Dealer();
};
#endif
