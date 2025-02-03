#include "Deck.h"
#include <stdlib.h>

Deck* make_deck(){
    Deck* deck = (Deck*)malloc(sizeof(Deck));
    for(int i = 0; i < MAXPILE; i++){
        deck->draw_pile[i].rank = (i % 13) + 1;
        deck->draw_pile[i].suit = i / 13;
    }
    for(int j = 0; j < MAXPILE; j++){
        deck->discard_pile[j].rank = 14;
        deck->discard_pile[j].suit = 4;
    }
    return deck;
}

void destroy_deck(Deck* deck){
    free(deck);
}