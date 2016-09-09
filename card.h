#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Card
{
    private:
        // All the member variables
        int cardValue;
        string cardSuit;
        char cardImage;
        
    public:
        // Constructors
        Card();
        Card(int cardValue, string cardSuit, char cardImage);
        
        // Getters
        int getCardValue() const {return cardValue;}
        string getCardSuit() const {return cardSuit;}
        char getCardImage() const {return cardImage;}
        
        // Setters
        void setCardValue(int cardValue) { this -> cardValue = cardValue;}
        void setCardImage(char cardImage) { this -> cardImage = cardImage;}
        void setCardSuit(string cardSuit) { this -> cardSuit = cardSuit;}
        
        
        // Member Methods
        //********************************************************************************
        // This displays the cards faceValue and its suit                       **********
        void displayCard(); 
        /*
        Pre-condition: This method does not need to take any parameters
        for it run, just need to be attached to a Card object
        
        Post-condition: After this method runs it will display how 
        the Card looks like (it makes the Card object look like a card)
        
        Summary: This method make the Card object look like a card 
        without taking any parameters in
        */
        
        
        //********************************************************************************
        // That makes it actually look like a card                              **********
        void cardFigure(int value, string suit, char image); 
        /*
        Pre-condition: This method takes in an int called value, 
        a string called suit and a char called image to make a figure
        
        Post-condition: After this method runs it will cout the code that makes 
        it look a card 
        
        Summary: This method takes in three inputs and will display the card
        */
        
        
};
#endif
