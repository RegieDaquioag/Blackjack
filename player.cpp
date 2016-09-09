#include "player.h"
#include "card.h"
#include <iostream>
using namespace std;

// default constructor
Player :: Player()
{
    handSize = 0;
    handTotal = 0;
    // deal() function in main will make a hand for the player
}
//*************************************************************

// adding a card to the player's hand
void Player :: hit(Deck &d1)
{
    Card temp[handSize];
    for(int i = 0; i < handSize; i++)
    {
        temp[i] = hand[i];
    }
    
    hand = new Card[handSize + 1];
    for (int i = 0; i < handSize; i++)
    {
        hand[i] = temp[i];
    }
    handSize++;
    
    // TODO: Add a new card to hand from d1
    hand[handSize - 1] = d1.draw();
    handTotal += hand[handSize - 1].getCardValue();
}
//*************************************************************

// check if sum of cards is over 21
bool Player :: isBusted()
{
    int total = 0;
    
    for (int i = 0; i < handSize; i++)
    {
        total += hand[i].getCardValue();
    }
    
    if (total > 21)
        return true;
        
    return false;
}
//*************************************************************

void Player :: displayHand()
{
    for (int i = 0; i < handSize; i++)
    {
        hand[i].displayCard();
    }
}
void Player :: checkAce() 
{
    int playerChoice = 3;
    for(int i = 0; i < handSize; i++)
    {
        if(hand[i].getCardImage() == 'A')
        {
            cout << "You have an Ace, would you like it to be 1 or 11?" << endl;
            cout << "Click 0 for (11), Click 1 for (1)" << endl;
            cin >> playerChoice;
            
            if(playerChoice == 0)
            {
                hand[i].setCardValue(11);
                cout << "Ace is now 11" << endl;
            }
            else if(playerChoice == 1)
            {
                hand[i].setCardValue(1);
                cout << "Ace is now 1." << endl;
                cout << hand[i].getCardValue() << endl;
            }
            else
            {
                hand[i].setCardValue(1);
                cout << "Ace is now 1." << endl;
            }
        }
    }
    handTotal = 0;
    for(int i = 0; i < handSize; i++)
    {
        handTotal += hand[i].getCardValue();
    }
    
}
Player :: ~Player()
{
    delete[] hand;
}
