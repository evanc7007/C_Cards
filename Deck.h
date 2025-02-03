#ifndef DECK_H
#define DECK_H
#include "Card.h"

#define MAXPILE 52

//struct for a deck
typedef struct{
    Card draw_pile[MAXPILE];
    Card discard_pile[MAXPILE];
} Deck;

Deck* make_deck();
void destroy_deck(Deck* deck);

#endif