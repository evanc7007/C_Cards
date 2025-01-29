#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXPILE 52

//enum for suits
typedef enum{SPADES, CLUBS, HEARTS, DIAMONDS} Suit;
//enum for ranks
typedef enum{ACE = 1, TWO, THREE, FOUR, FIVE, SIX,
    SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING} Rank;

//struct for a card
typedef struct{
    Suit suit;
    Rank rank;
} Card;

//struct for a deck
typedef struct{
    Card draw_pile[MAXPILE];
    Card discard_pile[MAXPILE];
} Deck;


int main(){
    printf("Hello vro!");
}