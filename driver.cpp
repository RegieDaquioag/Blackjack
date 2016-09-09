#include "player.h"
#include "card.h"
#include "dealer.h"
#include "deck.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void gamePlay();


int main()
{
    cout << "Welcome to funsies BlackJack!!!!" << endl;
    cout << "Rules: " << endl;
    cout << "      1.) The person with the highest card value total without passing 21 is the winner" << endl;
    cout << "      2.) If total is over 21, atomatic loss for tha player." << endl;
    cout << "      3.) No spliting of doubles." << endl;
    cout << "      4.) Dealer is not allowed to hit if they have 17 or more" << endl;
    
    bool playAgain = true;
    int playerChoice = 2;
    
    while(playAgain)
    {
        gamePlay();
        cout << "Would you like to play another hand? (1 = yes) (0 = no)" << endl;
        cin >> playerChoice;
        switch (playerChoice)
        {
            case 0:
                playAgain = false;
                break;
            case 1:
                playAgain = true;
                break;
            default:
                cout << "How did you get here?" << endl;
                cout << "I take that as a no." << endl;
                playAgain = false;
                break;
        }
    }
    return 0;
}

void gamePlay()
{
    Player p1;
    Dealer d1;
    Deck mainDeck;
    bool gameLoop = true;
    mainDeck.shuffle();
    int playerChoice = 2;
    string message = "\n";
    
    cout << "\n\t\tGame Starting Now!!" << endl;
    
    p1.hit(mainDeck);
    d1.hit(mainDeck);
    p1.hit(mainDeck);
    d1.hit(mainDeck);
    
    while(!p1.isBusted())
    {
        cout << "\n\nDealer Hand: " << endl;
        d1.displayHand();
        cout << "//////////////////////////////////////////////////////////////////" << endl;
        cout << "Player Hand: " << endl;
        p1.displayHand();
        p1.checkAce();
        cout << "Player, would you like to hit? (1 = yes) (0 = no)" << endl;
        if (p1.isBusted())
            {
                message += "Busted!\n";
                message += "Have you tried the command \"git gud\"\n";
                break;
            }
        cout << "Player Hand Total: " << p1.getHandTotal() << endl;
        cin >> playerChoice;
        
        if(playerChoice == 1)
        {
            cout << "Player chose to hit" << endl;
            cout << "Hitting" << endl;
            p1.hit(mainDeck);
            if (p1.isBusted())
            {
                message += "Busted!\n";
                message += "Have you tried the command \"git gud\"\n";
                break;
            }
        }
        else if (playerChoice == 0) 
        {
            cout << "Player chose to not hit" << endl;
            d1.setIsDealerTurn(true);
            break;
        }
        else
        {
            cout << "I'll take that as a yes!" << endl;
            cout << "Player chose to hit" << endl;
            cout << "Hitting" << endl;
            p1.hit(mainDeck);
            if (p1.isBusted())
            {
                message += "Busted!\n";
                message += "Have you tried the command \"git gud\"\n";
                break;
            }
        }
    }
    while(!d1.isBusted() && !d1.is17() && d1.getIsDealerTurn())
    {
        d1.hit(mainDeck);
        cout << "Dealer Hand: " << endl;
        d1.displayHand();
        if (d1.is17() && !d1.isBusted())
        {
            cout << "Dealer stays" << endl;
            break;
        }
        else if (d1.isBusted())
        {
            message += "Dealer busts\n";
            message += "Player wins!\n";
        }
    }
    if (d1.getHandTotal() > p1.getHandTotal() && (!d1.isBusted()))
    {
        message += "Dealer wins! Boo!\n";
    }
    else if (d1.getHandTotal() == p1.getHandTotal())
    {
        message += "You should still try and \"git gud\" cuz you tied with the dealer\n";
    }
    else
        message += "Player wins! Yay!\n";
    
    cout << "\n\nDealer Hand: " << endl;
    d1.displayHand();
    cout << "//////////////////////////////////////////////////////////////////" << endl;
    cout << "Player Hand: " << endl;
    p1.displayHand();
    cout << "Player Hand Total: " << p1.getHandTotal() << endl;
    cout << message << endl;
    message.clear();
    return;
}

/*

What goes in the main!!!???
    - the player gets a card facin up
    - the dealer gets a card facing down
    - the player gets another card facing up
    - the dealer gets a card facing up
    
    - the dealer and player has a total amount so keep track of the values the hand has
    - ckecks if the hand for the player is less that 21 and ask if they want to hit or stay
    - checks if the dealer hand has a value less than 17 and they have to hit
    - checks if the dealers hand value is 17 or more and if so the dealer stays
    - every time there it it would update to the current hand with the new card
    - have on option to see the amount that the dealer has; the value of the cards facing up
        - we can do this if we want to...
    - if the player wins it will congrats the player
    - if the player loses will make fun of the player or feel sorry for the player
    - will give the player a chance to quit the game if they choice to, a switch cases as a menu?
    
    TO DO:
    - make it show the cards going horizontal not verital 
    
*/
