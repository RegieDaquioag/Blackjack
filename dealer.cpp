#include "dealer.h"
#include "card.h"
#include "deck.h"
#include <iostream>

Dealer :: Dealer()
{
    handSize = 0;
    isDealerTurn = false;
    // deal() function in main will make a hand for the player
}
//***********************************************
bool Dealer :: is17()
{
    int total = 0;
    
    for (int i = 0; i < handSize; i++)
    {
        total += hand[i].getCardValue();
    }
    
    if (total >= 17)
        return true;
    
    return false;
}

void Dealer :: displayHand()
{
    if (isDealerTurn)
    {
        for (int i = 0; i < handSize; i++)
        {
            hand[i].displayCard();
        }
    }
    else
    {
        hand[1].displayCard();
    }
}
void Dealer :: setIsDealerTurn(bool turn)
{
    isDealerTurn = turn;
}
/*
Dealer::~Dealer()
{
    delete[] hand;
}
*/
