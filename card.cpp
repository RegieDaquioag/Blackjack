#include "card.h"
#include <iostream>
#include <string>
using namespace std;

Card :: Card()
{
    cardValue = 0;
    cardSuit = "";
    cardImage = ' ';
}
//*************************************************************

Card :: Card(int cardValue, string cardSuit, char cardImage)
{
    this -> cardValue = cardValue;
    this -> cardSuit = cardSuit;
    this -> cardImage = cardImage;
}
//*************************************************************

void Card :: displayCard()
{
    cardFigure(cardValue, cardSuit, cardImage);
    
}
//*************************************************************

void Card :: cardFigure(int value, string suit, char image)
{
    
    if(suit == "♥")
    {
        cout << " _____________________"  << endl
             << "| " << image << "                   |" << endl
             << "| " << suit << "                   |" << endl
             << "|   ♥♥♥        ♥♥♥    |" << endl
             << "|  ♥♥♥♥♥♥    ♥♥♥♥♥♥   |" << endl
             << "|  ♥♥♥♥♥♥ ♥♥ ♥♥♥♥♥    |" << endl
             << "|   ♥♥♥♥♥♥♥♥♥♥♥♥♥     |" << endl
             << "|    ♥♥♥♥♥♥♥♥♥♥♥      |" << endl
             << "|     ♥♥♥♥♥♥♥♥♥       |" << endl
             << "|      ♥♥♥♥♥♥♥        |" << endl
             << "|        ♥♥♥          |" << endl
             << "|         ♥           |" << endl
             << "|                  " << image << "  |" << endl
             << "|                  " << suit << "  |" << endl
             << "|_____________________|" << endl
             << endl;
             
        // return value;
    }
    else if(suit == "♦")
    {
        cout << " _____________________ " << endl
             << "| " << image << "                   |" << endl
             << "| " << suit << "                   |" << endl
             << "|          ♦️          |" << endl
             << "|        ♦️♦️♦️♦️♦        ️|" << endl
             << "|      ♦️♦️♦️♦️♦️️️️️♦️♦️️♦️♦      ️|" << endl
             << "|    ♦♦♦♦♦♦♦♦♦♦♦♦♦    |" << endl
             << "|   ♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦   |" << endl
             << "|    ♦♦♦♦♦♦♦♦♦♦♦♦♦    |" << endl
             << "|      ♦️♦️♦️♦️♦️♦️♦️♦♦      ️|" << endl
             << "|        ♦️♦️♦️♦️♦        |" << endl
             << "|          ♦️          |" << endl
             << "|                  " << image << "  |" << endl
             << "|                  " << suit << "  |" << endl
             << "|_____________________|" << endl
             << endl;
             
        // return value;
    }
    else if(suit == "♠")
    {
        cout << " _____________________ " << endl
             << "| " << image << "                   |" << endl
             << "| " << suit << "                   |" << endl
             << "|          ♠️          |" << endl
             << "|        ♠️♠️♠️♠️♠️        ️|" << endl
             << "|      ♠️♠️♠️♠️♠️♠️♠️♠️♠️      ️|" << endl
             << "|    ♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️    |" << endl
             << "|   ♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️♠️   |" << endl
             << "|    ♠️♠️♠️  ♠️♠️♠️ ♠️♠️♠   ️  |" << endl
             << "|          ️♠️          ️|" << endl
             << "|         ♠️♠️♠️         |" << endl
             << "|       ♠️♠️♠️♠️♠️♠♠️️       |" << endl
             << "|                  " << image << "  |" << endl
             << "|                  " << suit << "  |" << endl
             << "|_____________________|" << endl
             << endl;
        
        // return value;
    }
    else
    {
        cout << " _____________________ " << endl
             << "| " << image << "                   |" << endl
             << "| " << suit << "                   |" << endl
             << "|         ♣️♣️♣️♣️♣️       |" << endl
             << "|        ♣️♣️♣️♣️♣️♣♣️      |" << endl
             << "|     ♣♣  ♣♣♣♣♣ ♣♣️    |" << endl
             << "|    ♣♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️   |" << endl
             << "|   ♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️♣️  |" << endl
             << "|    ♣️♣️♣️   ♣️♣️♣️  ♣️♣️♣️   |" << endl
             << "|           ♣️         |" << endl
             << "|          ♣️♣️♣️        |" << endl
             << "|        ♣️♣️♣️♣️♣️♣️♣️      |" << endl
             << "|                  " << image << "  |" << endl
             << "|                  " << suit << "  |" << endl
             << "|_____________________|" << endl
             << endl;
             
        // return value;
    }
}
