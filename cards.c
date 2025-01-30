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

void changeindex1(Deck*, Card*);

int main(){
    Card card;
    card.suit = CLUBS;
    card.rank = ACE;
    Deck deck;
    deck.discard_pile[0] = card;
    changeindex1(&deck, &card);
    printf("%d", deck.discard_pile[0].suit);
    return 0;
}

void changeindex1(Deck* deck, Card* card){
    deck->discard_pile[1] = *card;
}