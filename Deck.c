#include "Deck.h"
#include <stdlib.h>

Deck* make_deck(void){
    Deck* deck = (Deck*)malloc(sizeof(Deck));
    for(int i = 0; i < MAXPILE; i++){
        deck->draw_pile[i].rank = (i % 13) + 1;
        deck->draw_pile[i].suit = i / 13;
    }
    for(int j = 0; j < MAXPILE; j++){
        deck->discard_pile[j].rank = EMPTYRANK;
        deck->discard_pile[j].suit = EMPTYSUIT;
    }
    return deck;
}

void destroy_deck(Deck* deck){
    free(deck);
}