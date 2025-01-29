#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXPILE 52

//enum for suits
typedef enum{SPADES, CLUBS, HEARTS, DIAMONDS} Suit;
//enum for ranks
typedef enum{ACE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6,
    SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 11, QUEEN = 12, KING = 13} Rank;

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