#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"
#include "deck.h"
using namespace std;

class Player
{
    protected:
        // All the member variables
        Card *hand; // pointer for the player's hand
        int handSize;
        int handTotal;
        
    public:
        // Constructor
        Player();
        
        // Member Methods
        //********************************************************************************
        // Adding a card to the player's hand                                   **********
        void hit(Deck &d1);
        /*
        Pre-condition: must have a deck to pass in
        
        Post-condition: player has one more card in their hand
        
        Summary: Takes a Card from the Deck and adds it to the player's array of Cards
        
        */        
        
        //********************************************************************************
        // check if sum of cards is over 21                                     **********
        bool isBusted();
        /*
        Pre-condition: Have Cards in the player's Hand
        
        Post-condition: Returns true if handTotal > 21
        
        Summary: Adds the value of all Cards in the player's Hand, then compares it to 21
        
        */
        
        //********************************************************************************
        // This will display what the player has                                **********
        void displayHand();
        /*
        Pre-condition: Have Cards in the player's Hand
        
        Post-condition: Prints the player's Hand
        
        Summary: prints the player's hand one card at a time
        
        */
        int getHandTotal() {return handTotal;}
        
        void checkAce();
        /*
        Pre-condition: Have an Ace in the Player's Hand
        
        Post-condition: Modifies the ace value to high (11) or low (1)
        
        Summary: Asks the player if they want the ace in their hand to be high or low,
                 then sets the ace's value accordingly
        */
        // destructor
        ~Player();
};
#endif
