#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Deck
{
    private:
        // All the memebr variables
        Card* deck;
        int numOfCards;
        int placeOfCard;
        
    public:
        // Constructor
        Deck();
        
        // Getters
        int getPlaceOfCard() {return placeOfCard;}
        
        
        // Setters
        void setPlaceOfCard(int placeOfCard) { this -> placeOfCard = placeOfCard;}
        
        
        // Overloaded Operator <<
        friend ostream& operator << (ostream& output , Card& a);
        
        // Member Methods
        //********************************************************************************
        // This will shuffle the deck to randomize the Card Objects             **********
        void shuffle();
        /*
        Pre-condition: This method tkes in nothing, just needs to be attached to a Deck object
        
        Post-condition: After this method runs it will shuffle the Card ojbects inside of the Deck ojects twice
        
        Summary: Takes nothing in to run and will shuffle the deck to randomize the card ojects inside it
        
        */
        
        //********************************************************************************
        // This will display the Card Objects to the terminal                   **********
        void displayDeck();
        /*
        Pre-condition:For this function to work it does not need to take any parameters to run
        
        Post-condition:When this runs it displays all the "cards" in the deck
        
        Summary:This is a helper function that we made just to make sure that it would display 
        the "cards" when we randomize the cards
        
        */
        
        //********************************************************************************
        // Will the the first Card Object that is available                     **********
        Card draw();
        /*
        Pre-condition: This method does not take any parameters to run, you just need to attach it
        to a Deck object
        
        Post-condition: When this method runs it will "draw" a Card ojbect from the the "deck"
        
        Summary: This draws the card from the deck when the first start the game and when the dealer or
        the player decides to hit
        
        */        
        
        // Deconstructor
        ~Deck();
        
    
};
#endif
        
