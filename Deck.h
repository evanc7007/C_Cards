#ifndef DECK_H
#define DECK_H
#include "Card.h"

//struct for a deck
typedef struct{
    Card draw_pile[MAXPILE];
    Card discard_pile[MAXPILE];
} Deck;

#endif