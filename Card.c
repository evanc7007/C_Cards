#include "Card.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_card(Card* card){
    char suit[][10] = {"Spades", "Clubs", "Hearts", "Diamonds"};
    char rank[][8] = {"Ace", "Two", "Three", "Four", "Five", "Six",
    "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    printf("Suit: %s\n", suit[card->suit]);
    printf("Rank: %s\n", rank[card->rank - 1]);
}

Card* random_card(){
    Card* card = (Card*)malloc(sizeof(card));
    srand(time(NULL));
    card->suit = rand() % 4;
    card->rank = 1 + rand() % 13;
    return card;
}

void destroy_card(Card* card){
    free(card);
}