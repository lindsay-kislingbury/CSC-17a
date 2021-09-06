/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 30, 2014, 12:54 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Our Libraries
#include "Deck.h"

//Global Constants

//Function Prototypes
void prntHnd(int *,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Create an array of 52 cards
    int nCards=52;
    Deck deck(nCards);
    
    //Deal a hand
    int nDelt=5;
    deck.shuffle();
    int *hand=deck.deal(nDelt);

    //Delete the arrays
    prntHnd(hand,nDelt);
    
    //Test the cards
    Card **c=new Card*[2];
    c[0]=new Card(0);
    c[1]=new DrvCard(0,"Testing");
    cout<<c[0]->name()<<c[0]->suit()<<endl;
    cout<<c[1]->name()<<c[1]->suit()<<endl;
    
    
    //Exit stage right
    return 0;
}

void prntHnd(int *hand,int n){
    for(int i=0;i<n;i++){
        Card c(hand[i]);
        cout<<c.name()<<c.suit()<<endl;
    }
    delete []hand;
}