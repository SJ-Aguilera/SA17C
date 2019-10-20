/* File:   main.cpp
 * Author: Saul Aguilera
 * Purpose: To create the card game WAR.
 * Created on October 12, 2019, 12:24 PM
 */

//System Libraries Here
#include <cstdlib> //Random function library
#include <iostream> //I/O Library
#include <ctime> //Time Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int MakeDeck(string*, string*,int);
int RandomDeck(int* [],int);


int main(int argc, char** argv) {
    //Generate random seed
    srand(static_cast<unsigned int>(time(0)));
    int totalDeck=52;
    string *DeckNum={"Ace","2","3","4","5","6","7","8","9","10","King","Queen","Jack"};
    string *DeckSuit={"Hearts","Spades","Diamonds","Clubs"};
    
    

    return 0;
}

